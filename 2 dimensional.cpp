#include <iostream>
using namespace std;

int main() 
{
	char ch;
	do{
		
    int a[2][2], b[2][2], result[2][2], choice;

    cout << "Enter elements of first  matrix:\n";
    for (int i = 0; i < 2; i++)
	{
        for (int j = 0; j < 2; j++)
		{
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second  matrix:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> b[i][j];
        }
    }
    
    
    cout << "Choose operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n";
    cin >> choice;

    switch (choice)
	 {
        case 1:
            for (int i = 0; i < 2; i++)
                {
                	for (int j = 0; j < 2; j++)
                   {
                   	 result[i][j] = a[i][j] + b[i][j];
				   }
				}
            cout << "Addition Result:\n";
            break;
            
         case 2:
            for (int i = 0; i < 2; i++)
                {
                	for (int j = 0; j < 2; j++)
                   {
                   	 result[i][j] = a[i][j] - b[i][j];
				   }
				}
            cout << "substraction Result:\n";
            break;
        
        case 3:
            for (int i = 0; i < 2; i++)
                {
                	for (int j = 0; j < 2; j++)
                   {
                   	 result[i][j] = a[i][j] * b[i][j];
				   }
				}
            cout << "Multiplication Result:\n";
            break;
        
        
            
             return 0;
        default:
            cout << "Invalid choice!\n";
            return 0;
            
    }
            
            for (int i = 0; i < 2; i++) 
			{
              for (int j = 0; j < 2; j++)
	          	{
		          cout << result[i][j] << "\t";
				}
                     cout << endl;
            }
  cout<<"do u want to continue?(y/n)"<<endl;
cin>>ch;  
   } while(ch == 'y'||ch == 'Y');

cout<<" end "<<endl;


return 0;
}

/* Enter elements of first  matrix:
2 3 4 5
Enter elements of second  matrix:
1 1 1 1
Choose operation:
1. Addition
2. Subtraction
3. Multiplication
1
Addition Result:
3       4
5       6
do u want to continue?(y/n)
y
Enter elements of first  matrix:
2 3 4 5
Enter elements of second  matrix:
1 1 1 1
Choose operation:
1. Addition
2. Subtraction
3. Multiplication
2
substraction Result:
1       2
3       4
do u want to continue?(y/n)
y
Enter elements of first  matrix:
2 3 4 5
Enter elements of second  matrix:
1 1 1 1
Choose operation:
1. Addition
2. Subtraction
3. Multiplication
3
Multiplication Result:
2       3
4       5 /*
        

