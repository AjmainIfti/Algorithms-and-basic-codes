#include<bits/stdc++.h>
using namespace std;
int main() {
    cout<<"Enter the number of elements : ";
    int n;
    cin>>n;

    cout<<"Enter the elements : ";
    int i, arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    int pass, temp;
    for (pass=1; pass<=n-1; pass++) {
        int optimize = 0;
        for (i=0; i<n-pass; i++) {
            if (arr[i]>arr[i+1]) {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                optimize++;
            }
        }
        if (optimize==0)
            break;
    }

    cout<<"After sorting : ";
    for (i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
