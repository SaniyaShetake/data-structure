#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the order of the square matrix: ";
    cin >> n;

    int matrix[n][n];

    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    
    cout << "Lower Triangular Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i)
                cout << "0 ";
            else
                cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "Upper Triangular Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j)
                cout << "0 ";
            else
                cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/* Enter the order of the square matrix: 2 2
Enter elements of the matrix:
2 3
4 2
Lower Triangular Matrix:
2 0
3 4
Upper Triangular Matrix:
2 2
0 4 /*
