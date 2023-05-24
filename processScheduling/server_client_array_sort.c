
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/wait.h>

#define SHM_SIZE 100 // shared memory size
#define MAX_ARRAY_SIZE 10

void shortArray(int *arr, int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int shmid;
    key_t key;
    int *shm;
    int *data;
    int i, n;

    key = ftok(".", 'x'); // generate unique key

    printf("Key: %d\n", key);

    shmid = shmget(key, SHM_SIZE, IPC_CREAT | 0666);

    if (shmid < 0) {
        perror("shmget");
        exit(1);
    }

    // attaching the shared memory segment

    shm = shmat(shmid, NULL, 0);

    printf("memory segment address: %p\n", (int *)-1);

    if (shm == (int *)-1) {
        perror("Shmat");
        exit(1);
    }

    data = shm;

    printf("Server: Enter the number of elements (maximum %d): ", MAX_ARRAY_SIZE);
    scanf("%d", &n);

    printf("Server: Enter %d elements: \n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    printf("Server: Data Written to shared memory.\n");

    shmdt(shm); // detach the shared memory segment

    // creating a child process

    pid_t pid = fork();

    if (pid < 0) {
        perror("fork");
        exit(1);
    }
    else if (pid == 0) {
        // child process i.e. client

        // attach the shared memory segment

        shm = shmat(shmid, NULL, 0);

        if (shm == (int *)-1) {
            perror("shmat");
            exit(1);
        }

        data = shm;

        printf("Client: Data read from shared memory.\n");
        printf("Client: Unsorted array: ");

        for (i = 0; i < n; i++) {
            printf("%d\t", data[i]);
        }

        printf("\n");

        // sort the array

        shortArray(data, n);

        printf("Client: Sorted array: ");

        for (i = 0; i < n; i++) {
            printf("%d\t", data[i]);
        }
        printf("\n");

        shmdt(shm);

        shmctl(shmid, IPC_RMID, NULL); // destroy the shared memory segment

        exit(0);
    } else {
        // parent process Server

        wait(NULL);
        printf("Server: Child Process Completed");
    }
    return 0;
}