#include"../include/sheduler.h"
void fcfs(Process p[],int n){
    //sorting processes based on arrival time
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if(p[j].arrival_time>p[j+1].arrival_time){
            Process temp=p[j];
            p[j]=p[j+1];
            p[j+1]=temp;
        }
    }
}
    int current_time=0;
    
    //calculating completion time
    for (int i=0;i<n;i++){
        if(current_time<p[i].arrival_time){
            current_time=p[i].arrival_time;
        }
        current_time+=p[i].burst_time;

        p[i].completion_time=current_time;

        p[i].turnaround_time=p[i].completion_time-p[i].arrival_time;
        p[i].waiting_time=p[i].turnaround_time-p[i].burst_time;
        p[i].response_time=p[i].waiting_time;
    }
    
}
void fcfs(Process p[], int n);