#include<iostream>
#include<vector>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
    // Write your code here.
}
int main()
{
    vector<int> arr={1,2,4,5,6,3};
    int index=linearSearch(6,4,arr);
    if(index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found." << endl;
    return 0;
    return 0;
}