#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int LA[n], i;
    cout<<"Enter the elements of the array : ";
    for(i=0; i<n; i++)
        cin>>LA[i];

    int item;
    cout<<"Enter the item you wanna insert : ";
    cin>>item;

    int j, k;
    cout<<"Enter the position of item you wanna insert : ";
    cin>>k;

    for(j=n-1; j>=k-1; j--)
        LA[j+1]=LA[j];
    LA[k-1]=item;
    n++;

    for(i=0; i<n; i++)
        cout<<LA[i]<<" ";

    return 0;
}
