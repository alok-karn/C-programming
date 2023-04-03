#include<stdio.h>
#define time_quantum 2

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

    printf("\nProcess\t\tArrival Time\t\tBurst Time\t\tPriority");

    for(i = 0; i < n; i++) {
        printf("\n");
        printf("\n%c\t\t%d\t\t\t%d\t\t\t%d", p[i], at[i], bt[i], priority[i]);
    }

    // RR Scheduling

    int time = 0, total_waiting_time = 0, total_turnaround_time = 0;
    float avg_waiting_time, avg_turnaround_time;

    int rt[n];

    for(i = 0; i < n; i++) {
        rt[i] = bt[i];
    }

    printf("\n\nGantt Chart: ");

    while(1) {
        int flag = 1;
        for(i = 0; i < n; i++) {
            if(rt[i] > 0) {
                flag = 0;
                if(rt[i] > time_quantum) {
                    time += time_quantum;
                    rt[i] -= time_quantum;
                    printf("\t%c", p[i]);
                } else {
                    time += rt[i];
                    rt[i] = 0;
                    printf("\t%c", p[i]);
                    total_waiting_time += time - at[i] - bt[i];
                    total_turnaround_time += time - at[i];
                }
            }
        }
        if(flag == 1) {
            break;
        }
    }

    avg_waiting_time = (float)total_waiting_time / n;
    avg_turnaround_time = (float)total_turnaround_time / n;

    printf("\n\nAverage Waiting Time: %f", avg_waiting_time);
    printf("\nAverage Turnaround Time: %f", avg_turnaround_time)

    
}