#include <iostream>
using namespace std;
int main() {
    int n, i;
   cout<<"enter Number of elemnts u want to input ";
	cin>>n;

    int a1[n], a2[n];

    cout<<"Enter elements for the first array:\n";
    for (i = 0; i < n; i++) {
        	cin>>a1[i];
    }
    for (i = 0; i < n; i++) {
        a2[i] = a1[i];
    }
   cout<<"elements are copied:\n";
    for (i = 0; i < n; i++) {
        cout<<a2[i]<<" ";
    }
    return 0;
}

// enter Number of elemnts u want to input 2
//Enter elements for the first array:
//2 3 
//elements are copied:
//2 3
