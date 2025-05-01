#include <iostream>
using namespace std;
int main() {
    int n, i;
    cout<<"Enter number of elements: ";
    cin>>n;


    int arr[n];
cout<<"Enter the elements of the array:\n";
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }

    cout<<"Reversed Array:\n";
    for (i = n - 1; i >= 0; i--) {
        cout<<arr[i]<<" ";
    }

    return 0;
}

