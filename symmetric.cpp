#include <iostream>
using namespace std;

int main() 
{
	int n,flag=1;
	cout<<"enter size of matrix";
	cin>>n;
	
	int matrix[100][100];

	cout<<"enter the elements in matrix"<<endl;
	for( int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>matrix[i][j];
		}	
			
	}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		  if( matrix[i][j]!=matrix[j][i])
			{
		     	flag = 0;
		     	break;
			}
		
		
		}	
			if(flag==0){
			
			break;
		}
	}
	
	if(flag==1)
	{
		cout<<"matrix is symmetric";
	}
	else
	{
		cout<<"matrix is not symmetric";
	}
	
	return 0;
}

//enter size of matrix 3
//enter the elements in matrix
//1 2 3
//4 5 6
//7 8 9
//matrix is not symmetric
//s--------------------------------
