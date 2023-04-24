#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <sys/ipc.h> 
#include <sys/shm.h> 
#include <stdbool.h> 
#include <stdio.h> 

#define BSIZE 27 // Buffer size 
#define PWT 2 // Process1 wait time limit 
#define CWT 1 // Process2 wait time limit 

int shmid1, shmid2, shmid3, shmid4; 
key_t k1 = 5491, k2 = 5812, k3 = 4327, k4 = 3213; 
bool* SHM1; 
int* SHM2; 
int* SHM3; 
FILE *ptr1; 
FILE *ptr2;
int main()
{   
    char file1[40],file2[40], chr; 
    printf("Enter the file name to be read: "); 
    scanf("%s",file1);    
    printf("Enter the file name to be written to: "); 
    scanf("%s",file2);
	shmid1 = shmget(k1, sizeof(bool) * 2, IPC_CREAT | 0660); // flag 
	shmid2 = shmget(k2, sizeof(int) * 1, IPC_CREAT | 0660); // turn 
	shmid3 = shmget(k3, sizeof(char) * BSIZE, IPC_CREAT | 0660); // buffer 

	if (shmid1 < 0 || shmid2 < 0 || shmid3 < 0 || shmid4 < 0) { 
		perror("Main shmget error: "); 
		exit(1); 
	} 
	SHM3 = (char*)shmat(shmid3, NULL, 0); 
	int i = 0; // Process2
	int j = 1; // Process1
    int pid1,pid2;
	if (pid1=fork() == 0) // Process1 code 
	{   ptr1=fopen(file1,"r");
		SHM1 = (bool*)shmat(shmid1, NULL, 0); 
		SHM2 = (int*)shmat(shmid2, NULL, 0); 
		SHM3 = (char*)shmat(shmid3, NULL, 0); 
		if (SHM1 == (bool*)-1 || SHM2 == (int*)-1 || SHM3 == (char*)-1) { 
			perror("Process1 shmat error: "); 
			exit(1); 
		} 

		bool* flag = SHM1; 
		int* turn = SHM2; 
		char* buf = SHM3;

		while (chr!=EOF) { 
			flag[j] = true; 
			printf("Process1 is ready now.\n\n"); 
			*turn = i; 
			while (flag[i]  && *turn == i) 
				; 

			// Critical Section Begin 
			chr=getc(ptr1);
            while(chr!='\n'&& chr !=EOF){
                       *buf=chr;
                       chr=getc(ptr1);
                       buf++;
                   }
			*buf=chr;
			buf++;
			
			// Critical Section End 
			flag[j] = false; 
		int	wait_time = PWT; 
			printf("Process1 will wait for %d seconds\n\n", wait_time); 
			wait(PWT); 
			
		}
		exit(0); 
	} 

	if (pid2=fork() == 0) // Process2 code 
	{   wait();
	    ptr2=fopen(file2,"w");
		SHM1 = (bool*)shmat(shmid1, NULL, 0); 
		SHM2 = (int*)shmat(shmid2, NULL, 0); 
		SHM3 = (char*)shmat(shmid3, NULL, 0); 
		if (SHM1 == (bool*)-1 || SHM2 == (int*)-1 || SHM3 == (char*)-1) { 
			perror("Process2 shmat error:"); 
			exit(1); 
		}

		bool* flag = SHM1; 
		int* turn = SHM2; 
		char* buf1 = SHM3; 
		
		flag[i] = false; 
        while(*buf1!=EOF){
            printf("%d",buf1);
            flag[i] = true; 
			printf("Process2 is ready now.\n\n"); 
			*turn = j; 
			while (flag[j] && *turn == j) 
				;
				// Critical Section Begin 
				while(*buf1!="\n" && *buf1!=EOF ){
				    fputc(*buf1,ptr2);
				    buf1++;
				}
				if(*buf1!="\n")
				fputc("\n",ptr2);
				// Critical Section End 
				flag[i] = false;
				int wait_time = CWT; 
			printf("Process2 will sleep for %d seconds\n\n", wait_time); 
			wait(CWT);
				
        }
		exit(0); 
	} 
	// Waiting for both processes to exit 
	wait(pid1); 
	wait(pid2); 
	printf("Transfer completed\n"); 
	return 0; 
}  

/*

    ------------------EXPLANATION-------------------------

This is a C program that implements Peterson's Algorithm for synchronizing two processes that access a shared buffer. The program takes two file names as input, the name of the file to be read by Process1 and the name of the file to be written to by Process2. The program then creates three shared memory segments using the shmget() function, which returns a shared memory identifier. The three segments are:

shmid1: A segment of size sizeof(bool)*2 to hold two Boolean flags used by the processes to signal their readiness to enter the critical section.
shmid2: A segment of size sizeof(int)*1 to hold a turn variable used to enforce the ordering of access to the critical section.
shmid3: A segment of size sizeof(char)*BSIZE to hold the shared buffer.
The program then forks two child processes, Process1 and Process2. Process1 reads characters from the input file one by one and writes them to the shared buffer until the end of the file is reached. Process2 reads characters from the shared buffer one by one and writes them to the output file until the end of the file is reached. The two processes synchronize their access to the shared buffer using Peterson's Algorithm, which uses the flags and turn variable stored in the shared memory segments.

Here is a brief summary of what each part of the code does:

Lines 7-11: Include necessary header files.
Line 13: Define the buffer size.
Line 14-15: Define wait time limits for Process1 and Process2.

In the main function, the shared memory segments are created using the shmget() system call with flags indicating the creation of the shared memory segment and the permissions for accessing it. The key values used in creating these shared memory segments are k1, k2, and k3, defined earlier in the code.

The shmat() function is used to attach these shared memory segments to the process address space. This function returns a pointer to the beginning of the shared memory segment that can be used to access the shared memory.

The fork() system call is used to create two child processes. In the first child process, the input file is read and the contents are written to a shared buffer. In the second child process, the contents of the shared buffer are read and written to the output file.

The wait() system call is used to synchronize the two child processes. This function suspends the calling process until one of its child processes terminates. The wait() function takes an argument which is the process ID of the child process to wait for. In this case, the wait() function is called with the process ID of the second child process to ensure that the output file is written correctly.

Once both child processes have completed, the main process displays a message indicating that the transfer has been completed, and then terminates.

Overall, this code implements the Peterson's algorithm for synchronization of two concurrent processes accessing a shared resource in a critical section. The shared memory segments are used for communication between the two processes, and the algorithm ensures that only one process can access the shared resource at a time, preventing conflicts and race conditions.


*/