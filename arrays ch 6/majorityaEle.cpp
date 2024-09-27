// ! majority element 

// ? majoriy of target element in an array must be grater then n/2 times 
//  broot force approach

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums={1,2,2,1,1};
    int n=nums.size();
    for(int val:nums){
        int fre=0;

        for(int ele:nums){
            if(ele==val){
                fre++;
            }
        }
        if(fre>n/2){
            // return val;
            cout<<val<<" ";
        }
    }
    return 0;
}