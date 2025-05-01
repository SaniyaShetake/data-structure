#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    
    void binarySearch(int arr[], int n, int key);//function declaration
    binarySearch(arr, n, key);// function call

    return 0;
}

void binarySearch(int arr[], int n, int key) {
    int first = 0, last= n - 1;

    while (first <= last) {
        int mid = (first + last) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid << endl;
            return; 
        } 
        else if (arr[mid] < key)
            first = mid + 1;
        else
            last= mid - 1;
    }
    
    cout << "Element not found" << endl;
}

/* Enter the number of elements: 5
Enter 5 sorted elements: 3 4 5 6 7
Enter element to search: 6
Element found at index 3/*
