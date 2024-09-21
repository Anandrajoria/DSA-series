// ! linear search

#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
    
}

int main()
{
    int arr[]={32,3245,432,3,1123,3,435,234};
    int size=8;
    cout<<linearSearch(arr,size,23);
    return 0;
}