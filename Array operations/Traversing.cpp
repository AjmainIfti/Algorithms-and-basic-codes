#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size of your array : ";
    int n;
    cin>>n;

    cout<<"Enter the elements of the array : ";
    int LA[n], k;
    for(k=0; k<n; k++)
        cin>>LA[k];

    int LB=0, UB=n-1;
    k=LB;
    while(k<=UB){
        LA[k]=LA[k]+1;
        k++;
    }

    cout<<"After traversing, the elements of LA are : "<<endl;
    for(k=0; k<n; k++)
        cout<<LA[k]<<" ";

    return 0;
}
