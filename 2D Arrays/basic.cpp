#include <iostream>
using namespace std;

/*
====================================================
BASICS OF 2D ARRAYS IN C++
====================================================

PLATFORM REFERENCES:
- GeeksforGeeks: Introduction to 2D Arrays
- Coding Ninjas: 2D Arrays Basics
- LeetCode (Concept Used In):
  - LeetCode 566: Reshape the Matrix
  - LeetCode 48: Rotate Image
  - LeetCode 73: Set Matrix Zeroes

----------------------------------------------------
WHAT IS A 2D ARRAY?
----------------------------------------------------
A 2D array is an array of arrays.
It is used to store data in a matrix format
(rows and columns).

Syntax:
int arr[rows][columns];

Example:
3 rows × 4 columns
int arr[3][4];

----------------------------------------------------
ACCESSING ELEMENTS:
----------------------------------------------------
arr[i][j]
i → row index
j → column index

----------------------------------------------------
COMMON USE CASES:
----------------------------------------------------
- Matrices
- Grids
- Table-like data
- Graph problems
- Image processing

----------------------------------------------------
TIME COMPLEXITY:
----------------------------------------------------
- Traversing a 2D array: O(n × m)

====================================================
*/

int main()
{
    cout << "=========== 2D ARRAY BASICS ===========\n\n";

    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    int arr[n][m];

    // ------------------------------------------------
    // Input elements into 2D array
    // ------------------------------------------------
    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    // ------------------------------------------------
    // Output the 2D array
    // ------------------------------------------------
    cout << "\nMatrix representation:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n=========== END OF PROGRAM ===========\n";
    return 0;
}
