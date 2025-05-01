#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
  

    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size - 1; i++) {
        cout << "Pass " << i + 1 << ": ";
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
			
              int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        for (int k = 0; k < size; k++)
            cout << arr[k] << " ";
        cout << endl;
    }

    cout << "\nSorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}

/* Enter number of elements: 5
Enter 5 elements: 23 45 67 12 2
Pass 1: 23 45 12 2 67
Pass 2: 23 12 2 45 67
Pass 3: 12 2 23 45 67
Pass 4: 2 12 23 45 67

Sorted array: 2 12 23 45 67/*

