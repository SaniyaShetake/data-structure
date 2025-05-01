#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter Number of elemnts u want to input ";
	cin>>n;
	cout<<"enter the elements ";
	
	int arr[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
		sum=sum+arr[i];
	}
	
	float avg=(float) sum/n;
  
	
		cout<<" the elements are "<<sum<<endl;
		cout<<"average of all sum is" <<avg<<endl;
	
	return 0;
}

// enter Number of elemnts u want to input 3
//enter the elements 2 3 4
 //the elements are 9
//average of all sum is 3

