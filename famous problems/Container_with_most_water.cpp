#include <iostream>
#include <vector>
using namespace std;

/*
====================================================
CONTAINER WITH MOST WATER
====================================================

PLATFORM REFERENCES:
- LeetCode 11: Container With Most Water
- GeeksforGeeks: Container With Most Water Problem

----------------------------------------------------
PROBLEM STATEMENT:
Given an array where each element represents the
height of a vertical line, find two lines that
together with the x-axis form a container that
holds the maximum amount of water.

----------------------------------------------------
FORMULA:
Water = width * min(height[left], height[right])

----------------------------------------------------
APPROACH 1: BRUTE FORCE
----------------------------------------------------
Logic:
- Try all possible pairs (i, j)
- Calculate water for each pair
- Return the maximum

Time Complexity: O(n²)
Space Complexity: O(1)

----------------------------------------------------
APPROACH 2: TWO POINTER (OPTIMIZED)
----------------------------------------------------
Logic:
1. Place one pointer at start, one at end
2. Calculate water
3. Move the pointer with smaller height
4. Repeat until pointers meet

Time Complexity: O(n)
Space Complexity: O(1)

====================================================
*/

// ----------------------------------------------------
// APPROACH 1: Brute Force Solution
// ----------------------------------------------------
int maxAreaBruteForce(vector<int>& height)
{
    int maxWater = 0;

    for(int i = 0; i < height.size(); i++){
        for(int j = i + 1; j < height.size(); j++){
            int width = j - i;
            int currHeight = min(height[i], height[j]);
            int currWater = width * currHeight;

            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}

// ----------------------------------------------------
// APPROACH 2: Two Pointer Optimized Solution
// ----------------------------------------------------
int maxAreaTwoPointer(vector<int>& height)
{
    int left = 0;
    int right = height.size() - 1;
    int maxWater = 0;

    while(left < right){
        int width = right - left;
        int currHeight = min(height[left], height[right]);
        int currWater = width * currHeight;

        maxWater = max(maxWater, currWater);

        // Move the pointer with smaller height
        if(height[left] < height[right]){
            left++;
        } else {
            right--;
        }
    }
    return maxWater;
}

int main()
{
    cout << "=========== CONTAINER WITH MOST WATER ===========\n\n";

    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Heights array: ";
    for(int h : heights){
        cout << h << " ";
    }
    cout << "\n\n";

    // Brute Force Result
    cout << "Brute Force Result:      "
         << maxAreaBruteForce(heights) << "\n";

    // Optimized Result
    cout << "Two Pointer Result:      "
         << maxAreaTwoPointer(heights) << "\n\n";

    cout << "=========== END OF PROGRAM ===========\n";
    return 0;
}
