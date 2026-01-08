#include <iostream>
using namespace std;

/*
====================================================
ARRAY PROBLEM – ROTATE ARRAY BY K STEPS
====================================================

PROBLEM STATEMENT:
Rotate an array to the right by K positions.

Example:
Input:  arr = {1, 2, 3, 4, 5}, k = 2
Output: {4, 5, 1, 2, 3}

----------------------------------------------------
METHOD 1: Using Extra Array
----------------------------------------------------
Logic:
1. Store last K elements first
2. Then store remaining (n - k) elements

Time Complexity: O(n)
Space Complexity: O(n)

----------------------------------------------------
METHOD 2: Reverse Method (Optimized)
----------------------------------------------------
Steps:
1. Reverse the entire array
2. Reverse first K elements
3. Reverse remaining (n - K) elements

Time Complexity: O(n)
Space Complexity: O(1)

This file demonstrates BOTH methods
with clear output.
====================================================
*/

// ----------------------------------------------------
// Helper function to reverse part of an array
// ----------------------------------------------------
void reverseArray(int arr[], int start, int end)
{
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    cout << "=========== ROTATE ARRAY BY K STEPS ===========\n\n";

    int k = 2;

    // =================================================
    // METHOD 1: Using Extra Array
    // =================================================
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = 5;
    int ans[5];

    k = k % n1;
    int idx = 0;

    // Store last k elements
    for(int i = n1 - k; i < n1; i++){
        ans[idx++] = arr1[i];
    }

    // Store remaining elements
    for(int i = 0; i < n1 - k; i++){
        ans[idx++] = arr1[i];
    }

    cout << "Method 1 (Extra Array)\n";
    cout << "Original array: ";
    for(int i = 0; i < n1; i++){
        cout << arr1[i] << " ";
    }

    cout << "\nRotated array:  ";
    for(int i = 0; i < n1; i++){
        cout << ans[i] << " ";
    }
    cout << "\n\n";


    // =================================================
    // METHOD 2: Reverse Method (Optimized)
    // =================================================
    int arr2[] = {1, 2, 3, 4, 5};
    int n2 = 5;

    k = k % n2;

    reverseArray(arr2, 0, n2 - 1);   // Step 1
    reverseArray(arr2, 0, k - 1);    // Step 2
    reverseArray(arr2, k, n2 - 1);   // Step 3

    cout << "Method 2 (Reverse Method)\n";
    cout << "Original array: ";
    cout << "1 2 3 4 5";

    cout << "\nRotated array:  ";
    for(int i = 0; i < n2; i++){
        cout << arr2[i] << " ";
    }
    cout << "\n\n";


    cout << "=========== END OF PROGRAM ===========\n";
    return 0;
}
