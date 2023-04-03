#include<stdio.h>
#include<limits.h>

int main() {
    int i, j, n, temp, _temp;

    printf("\nEnter the number of processes: ");
    scanf("%d", &n);

    printf("\nEnter the processes names: ");
    char p[n];

    for(i = 0; i < n; i++) {
        scanf("%s", &p[i]);
    }

    printf("\nEnter the arrival time: ");
    int at[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &at[i]);
    }

    printf("\nEnter the burst time: ");
    int bt[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &bt[i]);
    }

    printf("\nEnter the priority: ");
    int priority[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &priority[i]);
    }


    // sorting the processes according to arrival time
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(at[i] > at[j]) {
                temp = at[i];
                at[i] = at[j];
                at[j] = temp;

                _temp = bt[i];
                bt[i] = bt[j];
                bt[j] = _temp;

                char c = p[i];
                p[i] = p[j];
                p[j] = c;

                int __temp = priority[i];
                priority[i] = priority[j];
                priority[j] = __temp;

            }
        }
    }

    // printing the processes and their respective arrival time

    printf("\nProcesses\tArrival Time\tBurst Time\tPriority");
    for(i = 0; i < n; i++) {
        printf("\n");
        printf("%c\t\t%d\t\t%d\t\t%d", p[i], at[i], bt[i], priority[i]);
    }


    // SRTF algorithm

    int current_time = 0;
    float total_waiting_time = 0, total_turnaround_time = 0;
    int remaining_time[n];
    // int completed = 0, minm = 9999, shortest = 0, finish_time;

    for(i = 0; i < n; i++) {
        remaining_time[i] = bt[i];
    }

    int completed = 0;
    while(completed != n) {
        int shortest = INT_MAX;
        int shortest_index = -1;

        for (i = 0; i < n; i++) {
            if(at[i] <= current_time && remaining_time[i] < shortest && remaining_time[i] > 0 ) {
                shortest = remaining_time[i];
                shortest_index = i;
            }
        }

        if ( shortest_index == -1) {
            current_time++;
            continue;
        }

        remaining_time[shortest_index]--;
        if(remaining_time[shortest_index] == 0) {
            completed++;

            int turnaround_time = current_time - at[shortest_index] + 1;
            int waiting_time = turnaround_time - bt[shortest_index];

            total_waiting_time += waiting_time;
            total_turnaround_time += turnaround_time;
        }
        current_time++;
    }

    float avg_waiting_time = total_waiting_time / n;
    float avg_turnaround_time = total_turnaround_time / n;

    printf("\nAverage waiting time: %f", avg_waiting_time);
    printf("\nAverage turnaround time: %f", avg_turnaround_time);
    
}