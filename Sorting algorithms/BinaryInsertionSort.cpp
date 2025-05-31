#include<bits/stdc++.h>
using namespace std;
void BinaryinsertionSort(int arr[], int n);
int BinarySearch(int arr[], int key, int Beg, int End);
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    BinaryinsertionSort(arr, n);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}
void BinaryinsertionSort(int arr[], int n) {
    int step;
    for (step=1; step<n; step++) {
        int key = arr[step];

        int pos = BinarySearch(arr, key, 0, step-1);

        int check = step-1;

        while (check>=pos) {
            arr[check+1] = arr[check];
            check--;
        }
        arr[pos] = key;
    }
}
int BinarySearch(int arr[], int key, int Beg, int End) {
    while (Beg <= End) {
        int Mid = (Beg+End)/2;
        if (arr[Mid] > key) {
            End = Mid-1;
        }
        else{
            Beg = Mid+1;
        }
    }
    return Beg;
}
