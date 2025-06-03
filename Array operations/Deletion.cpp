#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int LA[n], i;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
        cin >> LA[i];

    int item, k;
    cout << "Enter the position of item you want to delete: ";
    cin >> k;

    for (int j = k - 1; j < n - 1; j++) {
        LA[j] = LA[j + 1];
    }
    n--; 
    
    for (i = 0; i < n; i++)
        cout << LA[i] << " ";

    return 0;
}
