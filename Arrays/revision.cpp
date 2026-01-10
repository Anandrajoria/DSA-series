// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {

//     // given two vectors of size m and n sorted in increasing order merge them into single sorted array of size m+n;

//     // return the maximum number of consecutive 1's in the array

//     vector<int> v={1,0,1,1,0,1};

//     int currentCount=0;
//     int maxCount=0;


//     for(int i=0;i<v.size();i++){
//         if(v[i]==1){
//             currentCount++;
//             maxCount=max(maxCount,currentCount);
//         }else if(v[i]==0){
//             currentCount=0;
//         }
//     }

// cout<<maxCount;
//     return 0;
// }

// ! another question


// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int>&nums1,int m,vector<int>&nums2,int n){

//     int i=m-1;
//     int j=n-1;
//     int k=m+n-1;

//     while(i>=0 && j>=0){
//         if(nums1[i]>nums2[j]){
//             nums1[k]=nums1[i];
//             i--;
//         }else{
//             nums1[k]=nums2[j];
//             j--;
//         }
//         k--;
//     }

//     while(j>=0){
//         nums1[k]=nums2[j];
//         j--;
//         k--;
//     }


// }
// int main()
// {
//     vector<int> arr1={1,2,3,0,0,0,0,0};
//     vector<int> arr2={1,2,3,4,5};

    
//     merge(arr1,3,arr2,5);

//     for(int x : arr1) {
//         cout << x << " ";
//     }


//     return 0;
// }


//! another question

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> twoSum(vector<int>&arr, int target){
//     int i=0;
//     int j=arr.size()-1;
//     vector<int> res;
//     while(i<j){
//         if(arr[i]+arr[j]==target){
//             return {i+1, j+1};
//             break;
//         }
//         else if(arr[i]+arr[j]<target){
//             i++;
//         }else j--;
//     }
//     return {};
// }
// int main()
// {
//         vector<int> arr={0,-2,-1,0,3,6,8,11,12};

//         int target=14;

//     vector<int>res=twoSum(arr,target);
//     if(!res.empty()){
//         cout<<res[0]<<" "<<res[1];
//     }else{
//         cout<<"no pair found";
//     }
//     return 0;
// }


// ! another question

// #include<iostream>
// #include<cstdlib>
// #include<vector>
// #include <algorithm>
// using namespace std;

// int findPair(vector<int>&nums,int k){
//     sort(nums.begin(),nums.end());
//     int i=0;
//     int j=1;
//     int res=0;
//     while(j<nums.size()){
//         if(nums[j]-nums[i]==k){
//             res++;
//             i++;
//             j++;
//             while (j<nums.size() && nums[j]==nums[j-1])
//             {
//                 j++;
//             }
            
//         }else if(nums[j]-nums[i]<k){
//             j++;
//         }else i++;
//         if(i==j) j++;
//     }
//     return res;
// }
// int main()
// {
//     vector<int>arr={1,2,4,4,3,3,0,9,2,3};
//     int k=3;

//     cout<<findPair(arr,k);
//     return 0;
// }



// ! new question

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> arr={-5,-4,-1,2,6};
//     int n=arr.size();

//     vector<int>res(n);
//     int i=0;
//     int j=n-1;
//     int k=n-1;

//     while(i<=j){
//         if(abs(arr[i])>abs(arr[j])){
//             res[k]=arr[i]*arr[i];
//             i++;
            
//         }else{
//             res[k]=arr[j]*arr[j];
//             j--;
            
//         }
//         k--;
//     }
//     for(int x : res){
//         cout<<x<<" ";
//     }
//     return 0;
// }


