#include <iostream>
using namespace std;

int main() {
    int n;

    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; 

    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

   
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; 

        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; }
        }

       
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }

       
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++)
            cout << arr[k] << " ";
        cout << endl;
    }

   
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*Enter the number of elements: 5
Enter 5 elements: 34 56 39 98 10
Pass 1: 10 56 39 98 34
Pass 2: 10 34 39 98 56
Pass 3: 10 34 39 98 56
Pass 4: 10 34 39 56 98
Sorted array: 10 34 39 56 98

