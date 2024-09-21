// ! reverse the array
#include<iostream>
using namespace std;

// void reverseArr(int arr[],int size){
//     for (int i = size-1; i >= 0 ; i--)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// !  two pointer approach

void reverseArr(int arr[],int size){
    int start=0,end=size-1;

    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    
}
int main()
{
    int arr[]={1,2,3,4};
    int size=4;
    reverseArr(arr,size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}