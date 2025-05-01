#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter the size of the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    cout << "Merged array: ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}

/* Enter the size of the first array: 3
Enter the elements of the first array: 11 22 33
Enter the size of the second array: 3
Enter the elements of the second array: 44 55 66
Merged array: 11 22 33 44 55 66

