// ! reversing array using two pointer approach
#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>&vec){
    int start=0 ,end=vec.size()-1;

    while (start<end)
    {
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    
}

int main()
{
    vector<int>vec={1,2,3,4};

    reverseArray(vec);

    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    
    return 0;
}
