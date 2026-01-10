#include <iostream>
#include <vector>
using namespace std;

/*
====================================================
PREFIX SUM – IMPORTANT ARRAY PROBLEMS
====================================================

Prefix Sum is a technique used to precompute
cumulative sums of an array to answer queries
efficiently.

----------------------------------------------------
PROBLEM 1: Running Sum of Array
----------------------------------------------------
Each element stores the sum of all previous elements.

Example:
Input:  {1, 2, 3, 4}
Output: {1, 3, 6, 10}

Time Complexity: O(n)
Space Complexity: O(1)

----------------------------------------------------
PROBLEM 2: Partition Array into Equal Prefix & Suffix
----------------------------------------------------
Check if there exists an index such that:
sum(left part) == sum(right part)

Time Complexity: O(n)
Space Complexity: O(1)

----------------------------------------------------
PROBLEM 3: Range Sum Queries (1-Based Indexing)
----------------------------------------------------
Given multiple queries (l, r),
find sum from index l to r.

Prefix Formula:
sum(l, r) = prefix[r] - prefix[l - 1]

Time Complexity:
- Preprocessing: O(n)
- Each query: O(1)

Very IMPORTANT interview concept.
====================================================
*/

// ----------------------------------------------------
// PROBLEM 1: Running Sum (In-place)
// ----------------------------------------------------
void runningSum(vector<int> &v)
{
    for(int i = 1; i < v.size(); i++){
        v[i] += v[i - 1];
    }
}

// ----------------------------------------------------
// PROBLEM 2: Check Equal Prefix & Suffix Sum
// ----------------------------------------------------
bool checkEqualPartition(vector<int> &v)
{
    int totalSum = 0;
    for(int ele : v){
        totalSum += ele;
    }

    int prefixSum = 0;
    for(int i = 0; i < v.size(); i++){
        prefixSum += v[i];
        int suffixSum = totalSum - prefixSum;

        if(prefixSum == suffixSum){
            return true;
        }
    }
    return false;
}

int main()
{
    cout << "=========== PREFIX SUM PROBLEMS ===========\n\n";

    // =================================================
    // PROBLEM 1 DEMO: Running Sum
    // =================================================
    vector<int> arr1 = {1, 2, 3, 4};

    cout << "Original array: ";
    for(int ele : arr1){
        cout << ele << " ";
    }
    cout << "\n";

    runningSum(arr1);

    cout << "Running sum array: ";
    for(int ele : arr1){
        cout << ele << " ";
    }
    cout << "\n\n";


    // =================================================
    // PROBLEM 2 DEMO: Equal Prefix & Suffix Sum
    // =================================================
    vector<int> arr2 = {1, 2, 3, 3};

    cout << "Array for partition check: ";
    for(int ele : arr2){
        cout << ele << " ";
    }
    cout << "\n";

    if(checkEqualPartition(arr2)){
        cout << "Array CAN be partitioned into equal sum parts\n\n";
    } else {
        cout << "Array CANNOT be partitioned into equal sum parts\n\n";
    }


    // =================================================
    // PROBLEM 3 DEMO: Range Sum Queries
    // =================================================
    vector<int> arr3 = {0, 1, 2, 3, 4, 5}; // 1-based indexing

    // Build prefix sum
    for(int i = 1; i < arr3.size(); i++){
        arr3[i] += arr3[i - 1];
    }

    cout << "Prefix sum array (1-based): ";
    for(int i = 1; i < arr3.size(); i++){
        cout << arr3[i] << " ";
    }
    cout << "\n";

    // Queries
    vector<pair<int,int>> queries = {{1,3}, {2,5}, {1,5}};

    cout << "Range sum queries:\n";
    for(auto q : queries){
        int l = q.first;
        int r = q.second;
        int sum = arr3[r] - arr3[l - 1];
        cout << "Sum from " << l << " to " << r << " = " << sum << endl;
    }

    cout << "\n=========== END OF PROGRAM ===========\n";
    return 0;
}
