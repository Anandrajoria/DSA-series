// ! kadane's algorithms 
// ? leetcode problem no 53

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=5;
    int arr[n]={5,4,-1,7,8};

    int curSum=0,maxSum=0;
    for (int i = 0; i < n; i++)
    {
        curSum+=arr[i];
        maxSum=max(curSum,maxSum);
        if (curSum<0)
        {
            curSum=0;
        }
        
    }
    cout<<maxSum;
    
    return 0;
}