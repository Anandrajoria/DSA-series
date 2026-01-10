#include <iostream>
#include <vector>
#include <algorithm>  // reverse
#include <cmath>      // abs
using namespace std;

/*
====================================================
TWO POINTER TECHNIQUE – IMPORTANT ARRAY PROBLEMS
====================================================

This file demonstrates TWO classic problems solved
using the Two Pointer technique.

----------------------------------------------------
PROBLEM 1: Move Even Numbers Before Odd Numbers
----------------------------------------------------
Given an array, rearrange it such that:
- All even numbers come first
- All odd numbers come later
- Order does NOT matter

Example:
Input:  {1, 2, 3, 4, 5, 6}
Output: {6, 2, 4, 3, 5, 1} (one possible answer)

Approach:
- Use two pointers (left & right)
- Swap misplaced odd-even elements

Time Complexity: O(n)
Space Complexity: O(1)

----------------------------------------------------
PROBLEM 2: Sorted Squares of a Sorted Array
----------------------------------------------------
Given a sorted array (may contain negatives),
return a new array of squares in sorted order.

Example:
Input:  {-4, -1, 0, 3, 10}
Output: {0, 1, 9, 16, 100}

Approach:
- Use two pointers from both ends
- Compare absolute values
- Insert larger square first

Time Complexity: O(n)
Space Complexity: O(n)

Both problems are VERY COMMON in interviews.
====================================================
*/

// ----------------------------------------------------
// PROBLEM 1: Move Even Numbers Before Odd Numbers
// ----------------------------------------------------
void moveEvenBeforeOdd(vector<int> &arr)
{
    int left = 0;
    int right = arr.size() - 1;

    while(left < right){
        if(arr[left] % 2 != 0 && arr[right] % 2 == 0){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        else if(arr[left] % 2 == 0){
            left++;
        }
        else if(arr[right] % 2 != 0){
            right--;
        }
    }
}

// ----------------------------------------------------
// PROBLEM 2: Sorted Squares of Sorted Array
// ----------------------------------------------------
vector<int> sortedSquares(vector<int> &v)
{
    int left = 0;
    int right = v.size() - 1;
    vector<int> ans;

    while(left <= right){
        if(abs(v[left]) < abs(v[right])){
            ans.push_back(v[right] * v[right]);
            right--;
        } else {
            ans.push_back(v[left] * v[left]);
            left++;
        }
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    cout << "=========== TWO POINTER PROBLEMS ===========\n\n";

    // =================================================
    // PROBLEM 1 DEMO
    // =================================================
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};

    cout << "Original array (Even-Odd): ";
    for(int ele : arr1){
        cout << ele << " ";
    }
    cout << "\n";

    moveEvenBeforeOdd(arr1);

    cout << "After rearranging:        ";
    for(int ele : arr1){
        cout << ele << " ";
    }
    cout << "\n\n";


    // =================================================
    // PROBLEM 2 DEMO
    // =================================================
    vector<int> arr2 = {-4, -1, 0, 3, 10};

    cout << "Original sorted array:    ";
    for(int ele : arr2){
        cout << ele << " ";
    }
    cout << "\n";

    vector<int> squaredSorted = sortedSquares(arr2);

    cout << "Sorted squares array:     ";
    for(int ele : squaredSorted){
        cout << ele << " ";
    }
    cout << "\n\n";

    cout << "=========== END OF PROGRAM ===========\n";
    return 0;
}
