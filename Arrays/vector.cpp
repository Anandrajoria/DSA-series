#include <iostream>
#include <vector>
using namespace std;

/*
====================================================
C++ STL VECTOR – COMPLETE CONCEPT GUIDE
====================================================

1. What is a Vector?
   - Vector is a dynamic array provided by STL
   - Size can grow or shrink automatically
   - Stored in continuous memory locations

2. Difference between Array and Vector
   - Array: fixed size
   - Vector: dynamic size

3. Important Vector Functions
   - size()      → number of elements
   - capacity()  → allocated storage
   - push_back() → add element at end
   - pop_back()  → remove last element
   - resize()    → change size
   - insert()    → insert at specific position
   - erase()     → remove element

4. Common Problems on Vector
   - Find last occurrence
   - Count occurrences
   - Check if sorted
   - Count elements greater than X
   - Difference between even & odd index sum

This program demonstrates all of the above
with clear output.
====================================================
*/

int main()
{
    cout << "================ VECTOR CONCEPTS IN C++ ================\n\n";

    // ----------------------------------------------------
    // 1. Vector Initialization, Size & Capacity
    // ----------------------------------------------------
    vector<int> v1;

    cout << "Initial size: " << v1.size() << endl;
    cout << "Initial capacity: " << v1.capacity() << "\n\n";

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    cout << "After push_back operations:\n";
    cout << "Size: " << v1.size() << endl;
    cout << "Capacity: " << v1.capacity() << "\n\n";


    // ----------------------------------------------------
    // 2. Traversing Vector
    // ----------------------------------------------------
    cout << "Vector elements: ";
    for(int ele : v1){
        cout << ele << " ";
    }
    cout << "\n\n";


    // ----------------------------------------------------
    // 3. Resize Vector
    // ----------------------------------------------------
    v1.resize(5);
    cout << "After resize to 5:\n";
    cout << "Size: " << v1.size() << endl;
    cout << "Capacity: " << v1.capacity() << "\n\n";


    // ----------------------------------------------------
    // 4. Insert & Erase
    // ----------------------------------------------------
    v1.insert(v1.begin() + 1, 99);

    cout << "After inserting 99 at index 1:\n";
    for(int ele : v1){
        cout << ele << " ";
    }
    cout << "\n";

    v1.erase(v1.begin() + 2);

    cout << "After erasing element at index 2:\n";
    for(int ele : v1){
        cout << ele << " ";
    }
    cout << "\n\n";


    // ----------------------------------------------------
    // 5. Find Last Occurrence of an Element
    // ----------------------------------------------------
    vector<int> v2 = {1, 2, 3, 2, 4, 2};
    int target = 2;
    int lastIndex = -1;

    for(int i = 0; i < v2.size(); i++){
        if(v2[i] == target){
            lastIndex = i;
        }
    }

    cout << "Last occurrence of " << target
         << " is at index: " << lastIndex << "\n\n";


    // ----------------------------------------------------
    // 6. Count Occurrence of a Number
    // ----------------------------------------------------
    int countNum = 2;
    int freq = 0;

    for(int ele : v2){
        if(ele == countNum){
            freq++;
        }
    }

    cout << "Count of " << countNum << " is: " << freq << "\n\n";


    // ----------------------------------------------------
    // 7. Count Elements Greater than X
    // ----------------------------------------------------
    int x = 2;
    int greaterCount = 0;

    for(int ele : v2){
        if(ele > x){
            greaterCount++;
        }
    }

    cout << "Elements greater than " << x
         << ": " << greaterCount << "\n\n";


    // ----------------------------------------------------
    // 8. Check if Vector is Sorted
    // ----------------------------------------------------
    vector<int> v3 = {1, 2, 3, 4, 5};
    bool isSorted = true;

    for(int i = 1; i < v3.size(); i++){
        if(v3[i] < v3[i - 1]){
            isSorted = false;
            break;
        }
    }

    if(isSorted){
        cout << "Vector is sorted\n\n";
    } else {
        cout << "Vector is not sorted\n\n";
    }


    // ----------------------------------------------------
    // 9. Difference between Even & Odd Index Sum
    // ----------------------------------------------------
    vector<int> v4 = {1, 2, 3, 4, 5, 6};
    int diffSum = 0;

    for(int i = 0; i < v4.size(); i++){
        if(i % 2 == 0){
            diffSum += v4[i];
        } else {
            diffSum -= v4[i];
        }
    }

    cout << "Difference (Even index sum - Odd index sum): "
         << diffSum << "\n\n";


    cout << "================ END OF PROGRAM ================\n";
    return 0;
}
