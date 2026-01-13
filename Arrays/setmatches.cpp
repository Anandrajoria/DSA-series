#include <iostream>
#include <vector>
using namespace std;

/*
====================================================
SET MISMATCH
====================================================

PLATFORM REFERENCES:
----------------------------------------------------
- LeetCode 645: Set Mismatch
- GeeksforGeeks: Find the Duplicate and Missing Number

----------------------------------------------------
PROBLEM STATEMENT:
----------------------------------------------------
You are given an array nums of size n containing
numbers from 1 to n.

One number is duplicated,
and one number is missing.

Return an array:
[duplicate, missing]

Example:
Input:  {1, 2, 2, 4}
Output: {2, 3}

----------------------------------------------------
APPROACH USED: FREQUENCY ARRAY
----------------------------------------------------
Logic:
1. Create a frequency array of size (n + 1)
2. Count occurrences of each number
3. Number with frequency 2 → duplicate
4. Number with frequency 0 → missing

----------------------------------------------------
TIME & SPACE COMPLEXITY:
----------------------------------------------------
Time Complexity: O(n)
Space Complexity: O(n)

====================================================
*/

// ----------------------------------------------------
// Function to find duplicate and missing number
// ----------------------------------------------------
vector<int> setMatch(vector<int>& nums)
{
    int n = nums.size();
    vector<int> freq(n + 1, 0);
    vector<int> res(2);

    // Count frequency of each element
    for(int x : nums){
        freq[x]++;
    }

    // Identify duplicate and missing numbers
    for(int i = 1; i <= n; i++){
        if(freq[i] == 2){
            res[0] = i;  // duplicate
        }
        else if(freq[i] == 0){
            res[1] = i;  // missing
        }
    }
    return res;
}

int main()
{
    cout << "=========== SET MISMATCH ===========\n\n";

    vector<int> arr = {1, 2, 2, 4};

    cout << "Input array: ";
    for(int x : arr){
        cout << x << " ";
    }
    cout << "\n";

    vector<int> result = setMatch(arr);

    cout << "Duplicate number: " << result[0] << endl;
    cout << "Missing number:   " << result[1] << "\n\n";

    cout << "=========== END OF PROGRAM ===========\n";
    return 0;
}
