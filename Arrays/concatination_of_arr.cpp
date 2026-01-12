#include <iostream>
#include <vector>
using namespace std;

/*
====================================================
CONCATENATION OF ARRAY
====================================================

PLATFORM REFERENCES:
----------------------------------------------------
- LeetCode 1929: Concatenation of Array
- Coding Ninjas: Concatenation of Array
- GeeksforGeeks: Concatenate Array to Itself

----------------------------------------------------
PROBLEM STATEMENT:
----------------------------------------------------
Given an integer array nums of length n,
create an array ans of length 2n such that:

ans[i]     = nums[i]
ans[i + n] = nums[i]

for 0 <= i < n.

Example:
Input:  {1, 2, 3}
Output: {1, 2, 3, 1, 2, 3}

----------------------------------------------------
APPROACH USED:
----------------------------------------------------
- Create a new array of size 2n
- Traverse the result array
- Use a pointer to repeat elements of original array

----------------------------------------------------
TIME & SPACE COMPLEXITY:
----------------------------------------------------
Time Complexity: O(n)
Space Complexity: O(n)

====================================================
*/

// ----------------------------------------------------
// Function to concatenate array with itself
// ----------------------------------------------------
vector<int> concatenateArray(vector<int>& arr)
{
    int n = arr.size();
    vector<int> ans(2 * n);
    int p = 0;

    for(int i = 0; i < ans.size(); i++){
        ans[i] = arr[p];
        p++;
        if(p == n){
            p = 0;
        }
    }
    return ans;
}

int main()
{
    cout << "=========== CONCATENATION OF ARRAY ===========\n\n";

    vector<int> arr = {1, 2, 3};

    cout << "Original array: ";
    for(int x : arr){
        cout << x << " ";
    }
    cout << "\n";

    vector<int> result = concatenateArray(arr);

    cout << "Concatenated array: ";
    for(int x : result){
        cout << x << " ";
    }
    cout << "\n\n";

    cout << "=========== END OF PROGRAM ===========\n";
    return 0;
}
