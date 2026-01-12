#include <iostream>
#include <vector>
using namespace std;

/*
====================================================
SHUFFLE THE ARRAY
====================================================

PLATFORM REFERENCES:
----------------------------------------------------
- LeetCode 1470: Shuffle the Array
- Coding Ninjas: Shuffle the Array
- GeeksforGeeks: Shuffle Array

----------------------------------------------------
PROBLEM STATEMENT:
----------------------------------------------------
Given an array nums of size 2n in the form:
[x1, x2, ..., xn, y1, y2, ..., yn]

Return an array in the form:
[x1, y1, x2, y2, ..., xn, yn]

Example:
Input:  nums = {1,2,3,4,5,6}, n = 3
Output: {1,4,2,5,3,6}

----------------------------------------------------
APPROACH USED:
----------------------------------------------------
- Create a new array of size 2n
- Place elements alternately from the two halves

Index Mapping:
ans[2*i]     = nums[i]
ans[2*i + 1] = nums[n + i]

----------------------------------------------------
TIME & SPACE COMPLEXITY:
----------------------------------------------------
Time Complexity: O(n)
Space Complexity: O(n)

====================================================
*/

// ----------------------------------------------------
// Function to shuffle the array
// ----------------------------------------------------
vector<int> shuffleArray(vector<int>& nums, int n)
{
    vector<int> ans(2 * n);

    for(int i = 0; i < n; i++){
        ans[2 * i]     = nums[i];
        ans[2 * i + 1] = nums[n + i];
    }
    return ans;
}

int main()
{
    cout << "=========== SHUFFLE THE ARRAY ===========\n\n";

    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int n = 3;

    cout << "Original array: ";
    for(int x : nums){
        cout << x << " ";
    }
    cout << "\n";

    vector<int> result = shuffleArray(nums, n);

    cout << "Shuffled array: ";
    for(int x : result){
        cout << x << " ";
    }
    cout << "\n\n";

    cout << "=========== END OF PROGRAM ===========\n";
    return 0;
}
