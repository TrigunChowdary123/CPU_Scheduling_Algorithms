#include<stdio.h>
#include "../include/sheduler.h"

int main(){
    int n;
    printf("Enter number of processes:\n");
    scanf("%d",&n);

    //Creating an array of structure.Each structure in the array represents one process.
    Process p[n];
    for (int i=0;i<n;i++){
        p[i].pid=i+1;

        printf("Enter arrival time of P%d",i+1);
        scanf("%d",&p[i].arrival_time);

        printf("Enter burst time of P%d",i+1);
        scanf("%d",&p[i].burst_time);

        p[i].remaining_time=p[i].burst_time
    }
    fcfs(p,n);

    printf("FCFS SCHEDULING");
    float total_wt=0;
    float total_tat=0;
    for (int i=0;i<n;i++){}
    printf("P%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
    p[i].pid,
    p[i].arrival_time,
    p[i].burst_time,
    p[i].completion_time,
    p[i].waiting_time,
    p[i].response_time);
    total_wt+=p[i].waiting_time;
    total_tat+=p[i].turnaround_time;

    return 0;
}