//  find maximum sub array sum

#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int arr[7]={3,-4,5,4,-1,7,8};
    int maxSum=0;

    for(int st=0;st<n;st++){
        int curSum=0;
        for(int end=st;end<n;end++){
            curSum+=arr[end];
            maxSum=max(curSum,maxSum);
        }
    }

    cout<<maxSum;
    return 0;
}