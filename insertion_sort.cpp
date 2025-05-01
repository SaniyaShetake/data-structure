#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n]; 

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int ptr = i - 1;

        while (ptr >= 0 && arr[ptr] > temp) {
            arr[ptr + 1] = arr[ptr];
            ptr--;
        }
        arr[ptr + 1] = temp;

       
        cout << "Pass " << i << ":- ";
        for (int k = 0; k < n; k++)
            cout << arr[k] << "   ";
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
Enter 5 elements: 02 45 99 78 43
Pass 1:- 2   45   99   78   43
Pass 2:- 2   45   99   78   43
Pass 3:- 2   45   78   99   43
Pass 4:- 2   43   45   78   99
Sorted array: 2 43 45 78 99

--------------------------------*/

