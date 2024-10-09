#include <stdio.h>

// Process structure
struct process {
    int id;
    int arrival_time;
    int burst_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
};

int main() {
    int n, i,s1=0,s2=0,s3=0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    // Array of n processes
    struct process p[n];

    // Input process data
    for (i = 0; i < n; i++) {
        printf("Process %d:\n", i + 1);
        printf("Enter arrival time: ");
        scanf("%d", &p[i].arrival_time);
        printf("Enter burst time: ");
        scanf("%d", &p[i].burst_time);
        p[i].id = i + 1;
    }

    // Calculate completion, turnaround, and waiting time for each process
    int current_time = 0;
    for (i = 0; i < n; i++) {
        // Calculate completion time
        if (p[i].arrival_time > current_time) {
            current_time = p[i].arrival_time;
        }
        p[i].completion_time = current_time + p[i].burst_time;


        // Calculate turnaround time
        p[i].turnaround_time = p[i].completion_time - p[i].arrival_time;

        // Calculate waiting time
        p[i].waiting_time = p[i].turnaround_time - p[i].burst_time;

        // Update current time
        current_time = p[i].completion_time;
    }
    for(i=0;i<n;i++)
    {
        s1+=p[i].completion_time;
        s2+=p[i].turnaround_time;
        s3+=p[i].waiting_time;
    }

    // Display process data
    printf("\nFCFS Scheduling:\n");
    printf("P   AT   BT   CT   TAT  WT\n");
    for (i = 0; i < n; i++) {
        printf("%d   %d    %d    %d    %d    %d\n", p[i].id, p[i].arrival_time, p[i].burst_time,
               p[i].completion_time, p[i].turnaround_time, p[i].waiting_time);
    }
    printf("\nAverage completion time=%d\nAverage turn around time=%d\nAverage waiting time=%d",s1/n,s2/n,s3/n);

    return 0;
}
