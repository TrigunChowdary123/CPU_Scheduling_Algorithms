#include<stdio.h>
#include "../include/scheduler.h"

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
    return 0;
}