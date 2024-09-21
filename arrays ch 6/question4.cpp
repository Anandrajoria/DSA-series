// !print intersection of 2 array

#include<iostream>
using namespace std;

void intersection(int arr1[],int size1,int arr2[],int size2){
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
                arr2[j]= -1;
                break;
            }
            
        }
        
    }
    
}

int main()
{
    int arr1[]={1,2,3,4,5};
    int size1=5;
    int arr2[]={6,23,245,34,2,5};
    int size2=6;

    intersection(arr1,size1,arr2,size2);
    return 0;
}