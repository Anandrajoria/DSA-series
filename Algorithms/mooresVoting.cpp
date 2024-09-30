// !  if any majority element whose majority is grater then n/2 

#include<iostream>
#include<vector>
using namespace std;

int majorityEle(vector<int>nums){
int fre=0,ans=0;
    int n=nums.size();
    for (int i = 0; i < n; i++)
    {
        if (fre==0)
        {
            ans=nums[i];
        }else if(ans=nums[i]){
            fre++;
        }else{
            fre--;
        }
    }

    int count=0;
    for(int val:nums){
        if (val==ans)
        {
            count++;
        }
        
    }
    if (count>n/2)
    {
        return ans;
    }else{
        return -1;
    }
    

}
int main()
{
    vector<int>nums={0,1,2,3,4};
    cout<<majorityEle(nums);
    return 0;
}
