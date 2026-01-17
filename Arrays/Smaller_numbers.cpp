#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

/*
====================================================
HOW MANY NUMBERS ARE SMALLER THAN THE CURRENT NUMBER
====================================================

PLATFORM REFERENCES:
----------------------------------------------------
- LeetCode 1365: How Many Numbers Are Smaller Than the Current Number
- Coding Ninjas
- GeeksforGeeks

----------------------------------------------------
PROBLEM STATEMENT:
----------------------------------------------------
Given an integer array nums, for each nums[i],
find how many numbers in the array are smaller than it.

Example:
Input:  nums = {8, 1, 2, 2, 3}
Output: {4, 0, 1, 1, 3}

----------------------------------------------------
METHODS USED:
----------------------------------------------------
Method 1: Brute Force (Nested Loops)
Method 2: Sorting + Hash Map (Optimized)

====================================================
*/

/*
----------------------------------------------------
METHOD 1: BRUTE FORCE APPROACH
----------------------------------------------------
APPROACH:
- For each element, compare it with every other element
- Count how many numbers are smaller

TIME COMPLEXITY: O(n²)
SPACE COMPLEXITY: O(n)
----------------------------------------------------
*/
vector<int> smallerNumber_BruteForce(vector<int>& nums)
{
    int n = nums.size();
    vector<int> ans(n, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j && nums[j] < nums[i]){
                ans[i]++;
            }
        }
    }
    return ans;
}

/*
----------------------------------------------------
METHOD 2: SORTING + HASH MAP (OPTIMIZED)
----------------------------------------------------
APPROACH:
1. Copy and sort the array
2. Store first index of each number in a hash map
3. First index represents count of smaller numbers

TIME COMPLEXITY: O(n log n)
SPACE COMPLEXITY: O(n)
----------------------------------------------------
*/
vector<int> smallerNumber_Optimized(vector<int>& nums)
{
    vector<int> sorted = nums;
    sort(sorted.begin(), sorted.end());

    unordered_map<int, int> mp;

    for(int i = 0; i < sorted.size(); i++){
        if(mp.find(sorted[i]) == mp.end()){
            mp[sorted[i]] = i;
        }
    }

    vector<int> ans;
    for(int x : nums){
        ans.push_back(mp[x]);
    }
    return ans;
}

// ----------------------------------------------------
// Main function
// ----------------------------------------------------
int main()
{
    cout << "===== COUNT SMALLER NUMBERS =====\n\n";

    vector<int> nums = {8, 1, 2, 2, 3};

    cout << "Input array: ";
    for(int x : nums){
        cout << x << " ";
    }
    cout << "\n\n";

    // Method 1 Output
    vector<int> result1 = smallerNumber_BruteForce(nums);
    cout << "Method 1 (Brute Force): ";
    for(int x : result1){
        cout << x << " ";
    }
    cout << "\n";

    // Method 2 Output
    vector<int> result2 = smallerNumber_Optimized(nums);
    cout << "Method 2 (Optimized):   ";
    for(int x : result2){
        cout << x << " ";
    }
    cout << "\n\n";

    cout << "===== END OF PROGRAM =====\n";
    return 0;
}
