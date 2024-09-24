// ! learch search using vector

#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>&vec,int target){
    bool isfound=0;
    for(int val:vec){
        if(val==target){
            isfound=1;
        }
    }
    return isfound;
}
int main()
{
    vector<int>vec={23,54,65,34,87,1};
    if(linearSearch){
        cout<<"we found";
    }else{
        cout<<"next time";
    }
    return 0;
}
