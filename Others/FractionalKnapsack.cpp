#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<<"Enter the value of knapsack capacity : ";
    int capacity;
    cin>>capacity;

    cout<<"Enter the number of elements : ";
    int n;
    cin>>n;

    float weight[n];
    float profit[n];


    cout<<"Enter the weights of the items : ";
    for(int i=0; i<n; i++)
        cin>>weight[i];

    cout<<"Enter the values of the profit : ";
    for(int i=0; i<n; i++)
        cin>>profit[i];

    float profitratio[n];
    int i;
    for(i=0; i<n; i++){
        profitratio[i]=profit[i]/weight[i];
    }




    int pass;
    for(pass=1; pass<n; pass++){
        int optimize = 0;
        for(i=0; i<n-pass; i++){
            if(profitratio[i]<profitratio[i+1]){
                swap(profitratio[i], profitratio[i+1]);
                swap(weight[i], weight[i+1]);
                swap(profit[i], profit[i+1]);
                optimize++;
            }

        }
        if(optimize==0)
            break;
    }



    float totalprofit=0;

    float remaining = capacity;

    float result[n];

    for(i=0; i<n; i++){

        if(weight[i]<=remaining){
            float knapsack = 1;
            remaining -= weight[i];
            totalprofit+=profit[i]*knapsack;
            result[i]=knapsack;
        }
        else{
            float knapsack = remaining/weight[i];

            remaining -= knapsack*weight[i];

            totalprofit+= profit[i]*knapsack;

            result[i]=knapsack;

        }

    }
    cout<<"Result array containing the knapsack values is : ";
    for(i=0; i<n; i++)
        cout<<result[i]<<" ";
    cout<<endl<<"Total profit = "<<totalprofit;


}
