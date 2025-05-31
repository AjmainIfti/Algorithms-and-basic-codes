#include<bits/stdc++.h>
using namespace std;

void mergeSort(vector<int>& v, int l, int r);
void printsort(vector<int>& v);
void Merge(vector<int>& v, int l, int mid, int r);

int main() {
    cout << "Enter the number of elements: ";
    int n;
    cin >> n;

    cout << "Enter the elements: ";
    vector<int> v;
    int elements;
    for (int i = 0; i < n; i++) {
        cin >> elements;
        v.push_back(elements);
    }

    mergeSort(v, 0, n - 1);

    cout << "Sorted array: " << endl;
    printsort(v);
}

void Merge(vector<int>& v, int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = v[l + i];

    for (int j = 0; j < n2; j++)
        R[j] = v[mid + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        } else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& v, int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;

        mergeSort(v, l, mid);
        mergeSort(v, mid + 1, r);

        Merge(v, l, mid, r);
    }
}

void printsort(vector<int>& v) {
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;
}
