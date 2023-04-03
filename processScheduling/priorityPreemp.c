#include <stdio.h>
#include <stdlib.h>

// Define the process struct
typedef struct {
    int pid;
    int arrival_time;
    int burst_time;
    int priority;
    int remaining_time;
    int turnaround_time;
    int waiting_time;
    int response_time;
} Process;

// Function to sort the processes based on priority (in ascending order)
int compare_priority(const void *a, const void *b) {
    Process *p1 = (Process *)a;
    Process *p2 = (Process *)b;
    return (p1->priority - p2->priority);
}

int main() {
    // Initialize the list of processes
    Process processes[] = {
        {1, 0, 10, 3, 10, 0, 0, 0},
        {2, 1, 5, 1, 5, 0, 0, 0},
        {3, 2, 8, 2, 8, 0, 0, 0},
        {4, 3, 6, 4, 6, 0, 0, 0},
        {5, 4, 9, 5, 9, 0, 0, 0}
    };
    int num_processes = sizeof(processes) / sizeof(processes[0]);

    // Initialize the ready queue
    Process *ready_queue[num_processes];
    int front = 0, rear = -1;

    // Initialize the current time and completed processes counter
    int current_time = 0, num_completed = 0;

    // Loop until all processes have been executed
    while (num_completed < num_processes) {
        // Check for arriving processes and add them to the ready queue
        for (int i = 0; i < num_processes; i++) {
            if (processes[i].arrival_time == current_time) {
                ready_queue[++rear] = &processes[i];
            }
        }

        // If there are processes in the ready queue, sort them by priority
        if (rear >= front) {
            qsort(&ready_queue[front], rear-front+1, sizeof(Process *), compare_priority);
        }

        // Dequeue the highest priority process and execute it for a quantum of time
        if (rear >= front) {
            Process *current_process = ready_queue[front++];
            current_process->remaining_time--;
            if (current_process->remaining_time == 0) {
                // If the process has finished executing, update its metrics
                current_process->turnaround_time = current_time - current_process->arrival_time + 1;
                current_process->waiting_time = current_process->turnaround_time - current_process->burst_time;
                current_process->response_time = current_time - current_process->arrival_time - current_process->burst_time + 1;
                num_completed++;
            } else {
                // If the process has not finished executing, add it back to the ready queue
                ready_queue[++rear] = current_process;
            }
        }

        // Update the current time
        current_time++;
    }

    // Print the results for each process
    printf("PID\tTurnaround Time\tWaiting Time\tResponse Time\n");
    for (int i = 0; i < num_processes; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", processes[i].pid, processes[i].turnaround_time, processes[i].waiting_time, processes[i].response_time);
    }

    return 0;
}
