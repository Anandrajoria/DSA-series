#include <iostream>
using namespace std;

/*
====================================================
ARRAY / VECTOR PROBLEMS – TARGET SUM CONCEPTS
====================================================

1. Target Sum (Pair Sum)
   - Find total number of pairs (i, j)
   - Condition: arr[i] + arr[j] == target
   - i < j to avoid duplicate pairs

2. Triplet Sum
   - Find total number of triplets (i, j, k)
   - Condition: arr[i] + arr[j] + arr[k] == target
   - i < j < k to avoid duplicates

3. Approach Used
   - Brute Force
   - Nested loops

4. Time Complexity
   - Pair Sum    → O(n²)
   - Triplet Sum → O(n³)

5. Space Complexity
   - O(1) (No extra space used)

This file demonstrates both problems
with clear output for understanding.
====================================================
*/

int main()
{
    cout << "=========== TARGET SUM PROBLEMS ===========\n\n";

    // ----------------------------------------------------
    // 1. Pair Sum Problem
    // ----------------------------------------------------
    int pairArr[] = {3, 4, 1, 6, 7};
    int pairSize = 5;
    int pairTarget = 7;
    int pairCount = 0;

    for(int i = 0; i < pairSize; i++){
        for(int j = i + 1; j < pairSize; j++){
            if(pairArr[i] + pairArr[j] == pairTarget){
                pairCount++;
            }
        }
    }

    cout << "Pair Sum Target: " << pairTarget << endl;
    cout << "Total pairs found: " << pairCount << "\n\n";


    // ----------------------------------------------------
    // 2. Triplet Sum Problem
    // ----------------------------------------------------
    int tripArr[] = {3, 4, 1, 6, 7, 8, 1, 2, 3, 4};
    int tripSize = 10;
    int tripTarget = 5;
    int tripletCount = 0;

    for(int i = 0; i < tripSize; i++){
        for(int j = i + 1; j < tripSize; j++){
            for(int k = j + 1; k < tripSize; k++){
                if(tripArr[i] + tripArr[j] + tripArr[k] == tripTarget){
                    tripletCount++;
                }
            }
        }
    }

    cout << "Triplet Sum Target: " << tripTarget << endl;
    cout << "Total triplets found: " << tripletCount << "\n\n";


    cout << "=========== END OF PROGRAM ===========\n";
    return 0;
}
