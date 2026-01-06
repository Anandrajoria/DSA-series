#include <iostream>
using namespace std;

/*
====================================================
ARRAY MANIPULATION – FIND UNIQUE ELEMENT
====================================================

PROBLEM STATEMENT:
Given an array where:
- Every element appears exactly twice
- Except one element which appears only once

Find and print the UNIQUE element.

----------------------------------------------------
APPROACH USED (Brute Force)
----------------------------------------------------
Logic:
1. Compare each element with all elements after it
2. If two elements are equal:
   - Mark both as -1 (invalid)
3. After comparison:
   - The element which is still > 0 is the unique element

----------------------------------------------------
IMPORTANT POINTS:
- Modifies the original array
- Simple logic, easy to understand
- Common interview question for beginners

----------------------------------------------------
TIME & SPACE COMPLEXITY:
- Time Complexity: O(n²)
- Space Complexity: O(1)

====================================================
*/

int main()
{
    cout << "=========== FIND UNIQUE ELEMENT ===========\n\n";

    int arr[] = {2, 3, 1, 3, 2, 4, 4, 7, 1};
    int size = 9;

    cout << "Original array: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    // ------------------------------------------------
    // Mark duplicate elements as -1
    // ------------------------------------------------
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                arr[i] = -1;
                arr[j] = -1;
            }
        }
    }

    // ------------------------------------------------
    // Find the unique element
    // ------------------------------------------------
    int uniqueElement = -1;
    for(int i = 0; i < size; i++){
        if(arr[i] > 0){
            uniqueElement = arr[i];
            break;
        }
    }

    cout << "Unique element in the array: "
         << uniqueElement << "\n\n";

    cout << "=========== END OF PROGRAM ===========\n";
    return 0;
}
