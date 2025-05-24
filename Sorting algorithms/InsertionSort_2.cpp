#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    int check, step, key;
    for (step = 1; step < n; step++) {
        key = arr[step];
        check = step - 1;

        while (check >= 0 && key < arr[check]) {
            arr[check + 1] = arr[check];
            --check;
        }
        arr[check + 1] = key;
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

    insertionSort(arr, n);

    cout << "After sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
