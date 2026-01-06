#include <iostream>
using namespace std;

/*
====================================================
C++ ARRAY CONCEPTS – BEGINNER FRIENDLY GUIDE
====================================================

1. What is an Array?
   An array is a collection of elements of the same data type
   stored in continuous memory locations.

   Example:
   int arr[] = {1, 2, 3, 4};

2. Why Arrays are used?
   - Store multiple values using a single variable
   - Faster access using index
   - Useful in searching, sorting, and data processing

3. Array Indexing
   - Index starts from 0
   - Last index = size - 1

4. Size of an Array
   size = sizeof(array) / sizeof(single element)

5. Traversing an Array
   - for loop
   - while loop
   - range-based for loop (for-each)

6. Common Array Operations
   - Sum of elements
   - Finding maximum element
   - Searching an element

7. Linear Search
   - Checks elements one by one
   - Works on sorted and unsorted arrays
   - Time Complexity: O(n)

This file demonstrates all the above concepts
with clear output for better understanding.
====================================================
*/

int main()
{
    cout << "================ ARRAY CONCEPTS IN C++ ================\n\n";

    // ----------------------------------------------------
    // 1. Integer Array & Size Calculation
    // ----------------------------------------------------
    int nums[] = {1, 2, 3, 4, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    cout << "Array elements: ";
    for(int i = 0; i < numsSize; i++){
        cout << nums[i] << " ";
    }
    cout << "\nSize of array: " << numsSize << "\n\n";


    // ----------------------------------------------------
    // 2. Traversing Array using FOR loop
    // ----------------------------------------------------
    cout << "Traversal using FOR loop:\n";
    for(int i = 0; i < numsSize; i++){
        cout << nums[i] << " ";
    }
    cout << "\n\n";


    // ----------------------------------------------------
    // 3. Traversing Array using FOR-EACH loop
    // ----------------------------------------------------
    cout << "Traversal using FOR-EACH loop:\n";
    for(int value : nums){
        cout << value << " ";
    }
    cout << "\n\n";


    // ----------------------------------------------------
    // 4. Traversing Array using WHILE loop
    // ----------------------------------------------------
    cout << "Traversal using WHILE loop:\n";
    int index = 0;
    while(index < numsSize){
        cout << nums[index] << " ";
        index++;
    }
    cout << "\n\n";


    // ----------------------------------------------------
    // 5. Character Array
    // ----------------------------------------------------
    /*
    Character arrays store characters.
    They are commonly used to store letters or strings.
    */
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

    cout << "Character array (vowels): ";
    for(char ch : vowels){
        cout << ch << " ";
    }
    cout << "\n\n";


    // ----------------------------------------------------
    // 6. Sum of Array Elements
    // ----------------------------------------------------
    /*
    Logic:
    - Initialize sum = 0
    - Add each element to sum
    */
    int sumArr[] = {1, 10, 3, 4, 5};
    int sumSize = sizeof(sumArr) / sizeof(sumArr[0]);
    int sum = 0;

    for(int i = 0; i < sumSize; i++){
        sum += sumArr[i];
    }

    cout << "Sum of array elements: " << sum << "\n\n";


    // ----------------------------------------------------
    // 7. Finding Maximum Element
    // ----------------------------------------------------
    /*
    Logic:
    - Assume first element is maximum
    - Compare with remaining elements
    - Update max if bigger value found
    */
    int maxArr[] = {1, 10, 3, 4, 5};
    int maxSize = sizeof(maxArr) / sizeof(maxArr[0]);
    int maximum = maxArr[0];

    for(int i = 1; i < maxSize; i++){
        if(maxArr[i] > maximum){
            maximum = maxArr[i];
        }
    }

    cout << "Maximum element in array: " << maximum << "\n\n";


    // ----------------------------------------------------
    // 8. Linear Search
    // ----------------------------------------------------
    /*
    Linear Search Algorithm:
    - Compare target element with each array element
    - Stop when found
    - If not found till end, element doesn't exist
    */
    int searchArr[] = {1, 10, 3, 4, 5};
    int searchSize = sizeof(searchArr) / sizeof(searchArr[0]);
    int target = 10;
    int position = -1;

    for(int i = 0; i < searchSize; i++){
        if(searchArr[i] == target){
            position = i;
            break;
        }
    }

    if(position != -1){
        cout << "Element " << target << " found at index: " << position << "\n";
    } else {
        cout << "Element " << target << " not found in array\n";
    }

    cout << "\n================ END OF PROGRAM ================\n";

    return 0;
}
