#include <iostream>
using namespace std;

/*
====================================================
2D ARRAY – MATRIX OPERATIONS
====================================================

PLATFORM REFERENCES:
----------------------------------------------------
1) Matrix Transpose
   - LeetCode 867: Transpose Matrix
   - GeeksforGeeks: Transpose of a Matrix

2) Matrix Multiplication
   - GeeksforGeeks: Matrix Multiplication
   - Coding Ninjas: Matrix Multiplication

----------------------------------------------------
BASIC CONCEPTS OF 2D ARRAYS
----------------------------------------------------
- A 2D array stores data in rows and columns
- Access element using: arr[row][col]
- Traversal requires nested loops

----------------------------------------------------
OPERATION 1: MATRIX TRANSPOSE
----------------------------------------------------
Definition:
Transpose of a matrix is obtained by
interchanging rows and columns.

Formula:
transpose[j][i] = matrix[i][j]

If matrix is n × m,
transpose becomes m × n.

Time Complexity: O(n × m)
Space Complexity: O(n × m)

----------------------------------------------------
OPERATION 2: MATRIX MULTIPLICATION
----------------------------------------------------
Condition:
Matrix A (r1 × c1) × Matrix B (r2 × c2)
Multiplication is possible only if:
c1 == r2

Formula:
C[i][j] = Σ (A[i][k] × B[k][j])

Result matrix size: r1 × c2

Time Complexity: O(r1 × c1 × c2)
Space Complexity: O(r1 × c2)

====================================================
*/

int main()
{
    cout << "=========== MATRIX OPERATIONS ===========\n\n";

    // =================================================
    // MATRIX TRANSPOSE
    // =================================================
    int n, m;
    cout << "Enter rows and columns for matrix A: ";
    cin >> n >> m;

    int A[n][m];

    cout << "Enter elements of matrix A:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> A[i][j];
        }
    }

    cout << "\nOriginal Matrix A:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int transpose[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            transpose[i][j] = A[j][i];
        }
    }

    cout << "\nTranspose of Matrix A:\n";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }


    // =================================================
    // MATRIX MULTIPLICATION
    // =================================================
    int r1, c1, r2, c2;
    cout << "\nEnter rows and columns for matrix B: ";
    cin >> r2 >> c2;

    if(m != r2){
        cout << "\nMatrix multiplication not possible!\n";
        cout << "Reason: Columns of A != Rows of B\n";
        return 0;
    }

    int B[r2][c2];

    cout << "Enter elements of matrix B:\n";
    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            cin >> B[i][j];
        }
    }

    int result[n][c2];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < c2; j++){
            result[i][j] = 0;
            for(int k = 0; k < m; k++){
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nResultant Matrix after Multiplication:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < c2; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n=========== END OF PROGRAM ===========\n";
    return 0;
}
