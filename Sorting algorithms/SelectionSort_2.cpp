#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    int step, minindex;
    for (step = 0; step < n - 1; step++) {
        minindex = step;
        for (int i = step + 1; i < n; i++) {
            if (arr[i] < arr[minindex])
                minindex = i;
        }
        swap(arr[minindex], arr[step]);
    }
}

int main() {
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectionSort(arr, n);

    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}
