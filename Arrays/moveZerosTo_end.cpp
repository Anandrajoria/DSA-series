#include <iostream>
#include <vector>
using namespace std;

/*
====================================================
MOVE ZEROES TO END OF ARRAY
====================================================

PLATFORM REFERENCES:
----------------------------------------------------
- LeetCode 283: Move Zeroes
- GeeksforGeeks: Move all zeroes to end of array
- Coding Ninjas: Move Zeros to End

----------------------------------------------------
PROBLEM STATEMENT:
----------------------------------------------------
Given an array, move all zero elements to the end
while maintaining the relative order of non-zero
elements.

Example:
Input:  {1, 2, 0, 4, 3, 0, 5, 0}
Output: {1, 2, 4, 3, 5, 0, 0, 0}

----------------------------------------------------
APPROACH USED: TWO POINTER / POSITION METHOD
----------------------------------------------------
Logic:
- Maintain a pointer `pos` for the position of
  the next non-zero element.
- Traverse the array:
  - If current element is non-zero, swap it
    with element at `pos`
  - Increment `pos`

----------------------------------------------------
WHY IT WORKS:
----------------------------------------------------
- All non-zero elements are moved forward
- Zeros automatically shift to the end
- Order of non-zero elements is preserved

----------------------------------------------------
TIME & SPACE COMPLEXITY:
----------------------------------------------------
Time Complexity: O(n)
Space Complexity: O(1)

====================================================
*/

// ----------------------------------------------------
// Function to move zeroes to the end (in-place)
// ----------------------------------------------------
void moveZeros(vector<int>& arr)
{
    int pos = 0;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
}

int main()
{
    cout << "=========== MOVE ZEROES TO END ===========\n\n";

    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};

    cout << "Original array: ";
    for(int x : arr){
        cout << x << " ";
    }
    cout << "\n";

    moveZeros(arr);

    cout << "After moving zeroes: ";
    for(int x : arr){
        cout << x << " ";
    }
    cout << "\n\n";

    cout << "=========== END OF PROGRAM ===========\n";
    return 0;
}
