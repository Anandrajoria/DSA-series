// ! find the single one number in an array
// ? leet code question number 136;

#include<iostream>
#include<vector>
using namespace std;

int sigleNum(vector<int>&nums){
    int ans=0;
    for(int val:nums){
        ans=ans^val;
    }
    return ans;
}

int main()
{
    vector<int>vec={4,1,2,1,2};
    cout<<sigleNum(vec);
    return 0;
}