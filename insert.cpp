#include <iostream>
using namespace std;
int main() {
    int n, i, element, pos;

   cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n + 1];  

   cout<<"Enter the elements:\n";
    for (i = 0; i < n; i++) {
         cin>>arr[i];
    }
    cout<<"Enter the element to insert: ";
    cin>>element;
    
    cout<<"Enter the position : ";
    cin>>pos;
    
    for (i = n; i >= pos; i--) 
	{
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
    cout<<"Array after insertion:\n";
    for (i = 0; i <= n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}

