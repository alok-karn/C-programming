#include<stdio.h>

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
            }
        }
    }
    
    

    
    // printing the processes and their respective arrival time

    printf("\nProcesses\tArrival Time\tBurst Time ");
    for(i = 0; i < n; i++) {
        printf("\n");
        printf("%c\t\t%d\t\t%d", p[i], at[i], bt[i]);
    } 
    
    int current_time = 0;
    float total_waiting_time = 0, total_turnaround_time = 0;
    
    for(i = 0; i<n; i++) {
        int waiting_time = current_time - at[i];
        
        if(waiting_time < 0) {
            waiting_time = 0;
            current_time = at[i];
        }
        
        int turnaround_time = bt[i] + waiting_time;
        
        total_waiting_time += waiting_time;
        total_turnaround_time += turnaround_time;
        printf("current time: %d", current_time);
        current_time += bt[i];
        
    }
    float avg_waiting_time = total_waiting_time / n;
    float avg_turnaround_time = total_turnaround_time / n;
    
    printf("\nAverage Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);


}