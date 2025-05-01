#include <iostream>
using namespace std;
int main() {
    int arr[100], n, pos, i;

   cout<<"enter array size";
	cin>>n;
    
    cout<<"Enter the elements of the array:\n";
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }

    cout<<"Enter the position of the element to delete: ";
    cin>>pos;

  
    if (pos < 1 || pos > n) {
        cout<<"Invalid position!\n";
        return 1;
    }

    for (i = pos-1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
 n--;
   cout<<"Array after deletion:\n";
    for (i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}

//enter array size 5
//Enter the elements of the array:
//2 3 4 5 6
//Enter the position of the element to delete: 3
//Array after deletion:
//2 3 5 6

