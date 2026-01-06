#include <iostream>
#include <climits>
using namespace std;

/*
====================================================
ARRAY PROBLEM – SECOND LARGEST ELEMENT
====================================================

PROBLEM STATEMENT:
Find the second largest element in an array.

----------------------------------------------------
APPROACH 1: Single Pass (Two Variables)
----------------------------------------------------
Logic:
- Maintain two variables:
  1. largest
  2. secondLargest
- Traverse the array once
- Update both variables accordingly

Time Complexity: O(n)
Space Complexity: O(1)

----------------------------------------------------
APPROACH 2: Index of Largest Element
----------------------------------------------------
Logic:
- Find index of the largest element
- Temporarily remove it (set to -1 or INT_MIN)
- Find largest again → this becomes second largest

Time Complexity: O(n)
Space Complexity: O(1)

This file demonstrates BOTH approaches
with clear output.
====================================================
*/

// ----------------------------------------------------
// Helper function to find index of largest element
// ----------------------------------------------------
int largestEleIndex(int arr[], int size)
{
    int maxVal = INT_MIN;
    int maxIdx = -1;

    for(int i = 0; i < size; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
            maxIdx = i;
        }
    }
    return maxIdx;
}

int main()
{
    cout << "=========== SECOND LARGEST ELEMENT ===========\n\n";

    // ------------------------------------------------
    // Approach 1: Single Pass Method
    // ------------------------------------------------
    int arr1[] = {1, 2, 3, 4};
    int size1 = 4;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < size1; i++){
        if(arr1[i] > largest){
            secondLargest = largest;
            largest = arr1[i];
        }
        else if(arr1[i] > secondLargest && arr1[i] != largest){
            secondLargest = arr1[i];
        }
    }

    cout << "Array (Approach 1): ";
    for(int i = 0; i < size1; i++){
        cout << arr1[i] << " ";
    }
    cout << "\nSecond largest element: "
         << secondLargest << "\n\n";


    // ------------------------------------------------
    // Approach 2: Using Index of Largest Element
    // ------------------------------------------------
    int arr2[] = {2, 3, 5, 7, 6, 1};
    int size2 = 6;

    int firstLargestIndex = largestEleIndex(arr2, size2);

    // Remove largest element temporarily
    arr2[firstLargestIndex] = INT_MIN;

    int secondLargestIndex = largestEleIndex(arr2, size2);

    cout << "Array (Approach 2): ";
    for(int i = 0; i < size2; i++){
        cout << arr2[i] << " ";
    }

    cout << "\nSecond largest element: "
         << arr2[secondLargestIndex] << "\n\n";

    cout << "=========== END OF PROGRAM ===========\n";
    return 0;
}
