// ! given an array arr=[1,2,3,4,5] find the maximum sum of a subarrray using kaden's algorihms

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=5;
    int arr[n]={1,2,3,4,5};

    int curSum=0 , maxSum=0;
    for (int i = 0; i < n; i++)
    {
        curSum+=arr[i];
        maxSum=max(curSum,maxSum);
    }

    cout<<maxSum;
    
    return 0;
}