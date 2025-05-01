#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mid = n / 2;
    cout << "First half of the array: ";
    for (int i = 0; i < mid; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Second half of the array: ";
    for (int i = mid; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

