// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>smallerNumber(vector<int>&nums){
//     int n=nums.size();
//     vector<int>ans(n,0);

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i!=j&& nums[j]<nums[i]){
//                 ans[i]++;
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
// vector<int> nums = {8,1,2,2,3};
//     vector<int> result = smallerNumber(nums);

//     for(int x : result){
//         cout << x << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int>smallerNumber(vector<int>&nums){
    vector<int>sorted=nums;
    sort(sorted.begin(),sorted.end());

    unordered_map<int, int> mp;

    for(int i=0;i<sorted.size();i++){
        if(mp.find(sorted[i])==mp.end()){
            mp[sorted[i]]=i;
        }
    }
       vector<int> ans;
    for(int x : nums){
        ans.push_back(mp[x]);
    }
    return ans;

}
int main(){
 vector<int> nums = {8,1,2,2,3};
    vector<int> result = smallerNumber(nums);

    for(int x : result){
        cout << x << " ";
    }
}