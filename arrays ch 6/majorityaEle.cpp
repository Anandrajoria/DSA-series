// ! majority element 

// ? majoriy of target element in an array must be grater then n/2 times 
//  broot force approach

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>nums={1,2,2,1,1};
//     int n=nums.size();
//     for(int val:nums){
//         int fre=0;

//         for(int ele:nums){
//             if(ele==val){
//                 fre++;
//             }
//         }
//         if(fre>n/2){
//             cout<<val<<" ";
//         }
//     }
//     return 0;
// }


// ! optimize apprach=first sort the array then count the frequency of each element and if the frequency is grater then n/2 that is majority element

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums={0,1,1,1,2,2,2,2,2};
    // sort(nums.begin(),nums.end());
    int fre=1;
    int ans=nums[0];
    // cout<<ans;
    int n=nums.size();

    for (int i = 1; i < n; i++)
    {
        if (nums[i]==nums[i-1])
        {
            fre++;
        }else{
            fre=1;
            ans=nums[i];
        }
        
    }
    
    if (fre>n/2)
    {
        cout<<ans;
    }
    
    // cout<<ans;
    return 0;
}