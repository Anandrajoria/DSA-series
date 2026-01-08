#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
====================================================
ARRAY / VECTOR CONCEPTS – FREQUENCY & DUPLICATES
====================================================

This file demonstrates TWO very important concepts:

----------------------------------------------------
METHOD 1: Frequency Array (Query Based Search)
----------------------------------------------------
Problem:
Given an array and Q queries, check how many times
a given number appears in the array.

Idea:
- Precompute frequency of elements
- Answer each query in O(1) time

Time Complexity:
- Preprocessing: O(n)
- Each query: O(1)

Space Complexity: O(N)

----------------------------------------------------
METHOD 2: Detect Duplicate using Hash Set
----------------------------------------------------
Problem:
Check if an array contains any duplicate element.

Idea:
- Store elements in unordered_set
- If element already exists → duplicate found

Time Complexity: O(n)
Space Complexity: O(n)

Both methods are VERY COMMON in interviews.
====================================================
*/

// ----------------------------------------------------
// METHOD 2 Helper Function: Check Duplicates
// ----------------------------------------------------
bool containsDuplicate(vector<int>& nums)
{
    unordered_set<int> s;

    for(int i = 0; i < nums.size(); i++){
        if(s.count(nums[i])){
            return true;
        }
        s.insert(nums[i]);
    }
    return false;
}

int main()
{
    cout << "=========== FREQUENCY & DUPLICATE CHECK ===========\n\n";

    // =================================================
    // METHOD 1: Frequency Array (Query Based)
    // =================================================
    vector<int> v = {1, 3, 2, 3, 5, 1, 4};
    int n = v.size();

    const int N = 100000 + 10;
    vector<int> freq(N, 0);

    // Build frequency array
    for(int i = 0; i < n; i++){
        freq[v[i]]++;
    }

    cout << "Array elements: ";
    for(int ele : v){
        cout << ele << " ";
    }
    cout << "\n\n";

    // Queries
    vector<int> queries = {1, 3, 6};

    cout << "Query Results:\n";
    for(int q : queries){
        cout << "Frequency of " << q << " = "
             << freq[q] << endl;
    }

    cout << "\n";


    // =================================================
    // METHOD 2: Duplicate Detection using Hash Set
    // =================================================
    vector<int> arr = {1, 2, 3, 4, 1};

    cout << "Array for duplicate check: ";
    for(int ele : arr){
        cout << ele << " ";
    }
    cout << "\n";

    if(containsDuplicate(arr)){
        cout << "Duplicate found\n";
    } else {
        cout << "No duplicate found\n";
    }

    cout << "\n=========== END OF PROGRAM ===========\n";
    return 0;
}
