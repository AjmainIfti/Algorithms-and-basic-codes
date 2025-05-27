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

    int step, minindex;
    for(step=0; step<n-1; step++){
        minindex=step;
        for(i=step+1; i<n; i++){
            if(arr[i]<arr[minindex])
                minindex=i;
        }
        swap(arr[minindex], arr[step]);
    }


    cout<<"After sorting : "<<endl;
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
