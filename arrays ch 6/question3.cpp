// !  print all the unique value in array

#include<iostream>
using namespace std;

void uniqueArr(int arr[],int size){
    
    for (int i = 0; i < size; i++)
    {
        int isUnique=1;
        for (int j = 0; j < i; j++)
        {
            if (arr[i]==arr[j])
            {
                isUnique=0;
                break;
            }
            
        }
        if(isUnique){
            cout<<arr[i]<<" ";
        }
    }
    
    
}

int main()
{
    int arr[]={1,2,3,4,1,2,3};
    int size=7;

    uniqueArr(arr,size);

    // for (int i = 0; i < size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    

    return 0;
}