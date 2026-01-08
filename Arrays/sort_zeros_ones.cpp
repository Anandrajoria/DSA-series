#include <iostream>
#include <vector>
using namespace std;

/*
====================================================
VECTOR PROBLEM – SORT 0s AND 1s
====================================================

PROBLEM STATEMENT:
Given a vector containing only 0s and 1s,
sort it so that all 0s come before all 1s.

Example:
Input:  {1, 0, 1, 0, 1, 0}
Output: {0, 0, 0, 1, 1, 1}

----------------------------------------------------
METHOD 1: COUNTING METHOD
----------------------------------------------------
Logic:
1. Count number of zeros
2. Fill first zeroCount positions with 0
3. Fill remaining positions with 1

Time Complexity: O(n)
Space Complexity: O(1)

----------------------------------------------------
METHOD 2: TWO POINTER METHOD (OPTIMIZED)
----------------------------------------------------
Logic:
- Use two pointers:
  left  → start
  right → end
- Swap misplaced 1 on left with 0 on right

Time Complexity: O(n)
Space Complexity: O(1)

Both methods are COMMON in interviews.
====================================================
*/

// ----------------------------------------------------
// METHOD 1: Counting Method
// ----------------------------------------------------
void sortZerosCounting(vector<int> &v)
{
    int zeroCount = 0;

    for(int ele : v){
        if(ele == 0){
            zeroCount++;
        }
    }

    for(int i = 0; i < v.size(); i++){
        if(i < zeroCount){
            v[i] = 0;
        } else {
            v[i] = 1;
        }
    }
}

// ----------------------------------------------------
// METHOD 2: Two Pointer Method (Optimized)
// ----------------------------------------------------
void sortZerosTwoPointer(vector<int> &v)
{
    int left = 0;
    int right = v.size() - 1;

    while(left < right){
        if(v[left] == 1 && v[right] == 0){
            v[left++]=0;
             v[right--]=1;
        }
        else if(v[left] == 0){
            left++;
        }
        else if(v[right] == 1){
            right--;
        }
    }
}

int main()
{
    cout << "=========== SORT 0s AND 1s ===========\n\n";

    vector<int> v1 = {1, 0, 1, 0, 1, 0};
    vector<int> v2 = v1;

    cout << "Original vector: ";
    for(int ele : v1){
        cout << ele << " ";
    }
    cout << "\n\n";

    // Method 1
    sortZerosCounting(v1);
    cout << "After Counting Method:    ";
    for(int ele : v1){
        cout << ele << " ";
    }
    cout << "\n";

    // Method 2
    sortZerosTwoPointer(v2);
    cout << "After Two Pointer Method: ";
    for(int ele : v2){
        cout << ele << " ";
    }
    cout << "\n\n";

    cout << "=========== END OF PROGRAM ===========\n";
    return 0;
}
