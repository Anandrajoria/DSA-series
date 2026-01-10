#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/*
====================================================
ARRAY & TWO POINTER – IMPORTANT INTERVIEW PROBLEMS
====================================================

PLATFORM REFERENCES:
----------------------------------------------------
1) Maximum Consecutive Ones
   - LeetCode 485: Max Consecutive Ones

2) Merge Two Sorted Arrays
   - LeetCode 88: Merge Sorted Array

3) Two Sum (Sorted Array)
   - LeetCode 167: Two Sum II - Input Array Is Sorted

4) Count Pairs with Given Difference
   - LeetCode 532: K-diff Pairs in an Array

5) Squares of a Sorted Array
   - LeetCode 977: Squares of a Sorted Array

----------------------------------------------------
All problems are solved using:
- Arrays / Vectors
- Two Pointer Technique
====================================================
*/


// ----------------------------------------------------
// 1. Maximum Consecutive Ones
// ----------------------------------------------------
int maxConsecutiveOnes(vector<int>& v)
{
    int currentCount = 0;
    int maxCount = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == 1){
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
    }
    return maxCount;
}


// ----------------------------------------------------
// 2. Merge Two Sorted Arrays (nums1 has extra space)
// ----------------------------------------------------
void mergeSortedArrays(vector<int>& nums1, int m,
                        vector<int>& nums2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;

    while(i >= 0 && j >= 0){
        if(nums1[i] > nums2[j]){
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    while(j >= 0){
        nums1[k--] = nums2[j--];
    }
}


// ----------------------------------------------------
// 3. Two Sum (Sorted Array) – Count Pairs
// ----------------------------------------------------
int countTwoSumPairs(vector<int>& arr, int target)
{
    int i = 0, j = arr.size() - 1;
    int count = 0;

    while(i < j){
        int sum = arr[i] + arr[j];
        if(sum == target){
            count++;
            i++;
            j--;
        }
        else if(sum < target){
            i++;
        } else {
            j--;
        }
    }
    return count;
}


// ----------------------------------------------------
// 4. Count Pairs with Difference = k
// ----------------------------------------------------
int countPairsWithDiff(vector<int>& nums, int k)
{
    sort(nums.begin(), nums.end());
    int i = 0, j = 1, count = 0;

    while(j < nums.size()){
        int diff = nums[j] - nums[i];
        if(diff == k){
            count++;
            i++;
            j++;
            while(j < nums.size() && nums[j] == nums[j - 1])
                j++;
        }
        else if(diff < k){
            j++;
        }
        else {
            i++;
        }
        if(i == j) j++;
    }
    return count;
}


// ----------------------------------------------------
// 5. Squares of a Sorted Array
// ----------------------------------------------------
vector<int> sortedSquares(vector<int>& arr)
{
    int n = arr.size();
    vector<int> res(n);
    int i = 0, j = n - 1, k = n - 1;

    while(i <= j){
        if(abs(arr[i]) > abs(arr[j])){
            res[k--] = arr[i] * arr[i];
            i++;
        } else {
            res[k--] = arr[j] * arr[j];
            j--;
        }
    }
    return res;
}


int main()
{
    cout << "=========== ARRAY & TWO POINTER PROBLEMS ===========\n\n";

    // ------------------------------------------------
    // Problem 1: Max Consecutive Ones
    // ------------------------------------------------
    vector<int> ones = {1, 0, 1, 1, 0, 1};
    cout << "Max Consecutive Ones: "
         << maxConsecutiveOnes(ones) << "\n\n";


    // ------------------------------------------------
    // Problem 2: Merge Sorted Arrays
    // ------------------------------------------------
    vector<int> a = {1, 2, 3, 0, 0, 0};
    vector<int> b = {2, 5, 6};
    mergeSortedArrays(a, 3, b, 3);

    cout << "Merged Sorted Array: ";
    for(int x : a) cout << x << " ";
    cout << "\n\n";


    // ------------------------------------------------
    // Problem 3: Two Sum (Count Pairs)
    // ------------------------------------------------
    vector<int> ts = {1, 2, 3, 4, 6};
    int target = 7;
    cout << "Two Sum Pair Count: "
         << countTwoSumPairs(ts, target) << "\n\n";


    // ------------------------------------------------
    // Problem 4: Count Pairs with Difference K
    // ------------------------------------------------
    vector<int> diffArr = {1, 2, 4, 4, 3, 3, 0, 9, 2, 3};
    int k = 3;
    cout << "Pairs with difference " << k << ": "
         << countPairsWithDiff(diffArr, k) << "\n\n";


    // ------------------------------------------------
    // Problem 5: Sorted Squares
    // ------------------------------------------------
    vector<int> sq = {-5, -4, -1, 2, 6};
    vector<int> sqRes = sortedSquares(sq);

    cout << "Sorted Squares Array: ";
    for(int x : sqRes) cout << x << " ";
    cout << "\n\n";

    cout << "=========== END OF PROGRAM ===========\n";
    return 0;
}
