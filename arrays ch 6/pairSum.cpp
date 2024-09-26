//!  return pair in sorted array with target sum 
// broot force method    complexity n to the power square


// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int>pairSum(vector<int> nums, int target){
//     vector<int>ans;
//     int n=nums.size();

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (nums[i]+nums[j]==target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
            
//         }
        
//     }
// }
// int main()
// {
//     int target=9;
//     vector<int>arr={2,7,11,15};
//     vector<int>ans=pairSum(arr,target);
//     cout<<ans[0]<<","<<ans[1];
// }

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>nums,int target){
    int n=nums.size();
    int i=0,j=n-1;
    vector<int> ans;
    while (i<j)
    {
        int pairsum=nums[i]+nums[j];
        if (pairsum>target)
        {
            j--;
        }else if(pairsum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        
        
    }
    
}
int main()
{
    int target=9;
    vector<int>arr={2,7,11,15};
    vector<int>ans=pairSum(arr,target);
    cout<<ans[0]<<","<<ans[1];
    return 0;
}