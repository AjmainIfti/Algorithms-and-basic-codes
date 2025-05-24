#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of elements :";
    int n;
    cin>>n;

    cout<<endl;

    cout<<"Enter the elements : ";
    int i, arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<endl;

    int check, step, key;

    for(step=1; step<n; step++){
        key = arr[step];
        check =step-1;

        while(check>=0 && key<arr[check]){
            arr[check+1] = arr[check];
            --check;
        }
        arr[check+1]=key;
    }


    cout<<"After sorting : "<<endl;
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
