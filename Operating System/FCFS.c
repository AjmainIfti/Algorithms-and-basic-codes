///FCFS code



#include<stdio.h>

void waitingtime(int n, int bt[n], int wt[n]);
void turnaroundtime(int n, int bt[n], int wt[n], int tt[n]);
void average(int n, int bt[n], int wt[n], int tt[n]);
void Print(int n, int pID[n], int bt[n], int wt[n], int tt[n]);

int main(){

    int n;
    printf("Enter the number of processes : ");
    scanf("%d", &n);

    int pID[n], bt[n], wt[n], tt[n];

    printf("Entering the process IDs with their corresponding burst time : \n");
    for(int i = 0; i < n; i++){
        scanf("%d %d", &pID[i], &bt[i]);
    }

    waitingtime(n, bt, wt);
    turnaroundtime(n, bt, wt, tt);
    Print(n, pID, bt, wt, tt);
    average(n, bt, wt, tt);

}

void waitingtime(int n, int bt[n], int wt[n]){
    wt[0] = 0;
    for(int i = 1; i < n; i++){
        wt[i] = wt[i - 1] + bt[i - 1];
    }
}

void turnaroundtime(int n, int bt[n], int wt[n], int tt[n]){
    for(int i = 0; i < n; i++)
        tt[i] = wt[i] + bt[i];
}

void average(int n, int bt[n], int wt[n], int tt[n]){
    float sumwt = 0, sumtt = 0;
    for(int i = 0; i < n; i++){
        sumwt += wt[i];
        sumtt += tt[i];
    }

    float avgwt = sumwt / n;
    float avgtt = sumtt / n;

    printf("Average waiting time = %.2f\n", avgwt);
    printf("Average turn-around time = %.2f\n", avgtt);
}

void Print(int n, int pID[n], int bt[n], int wt[n], int tt[n]){
    for(int i = 0; i < n; i++){
        printf("Process id: %d\n", pID[i]);
        printf("Burst time: %d\n", bt[i]);
        printf("Waiting time: %d\n", wt[i]);
        printf("Turnaround time: %d\n\n", tt[i]);
    }
}
