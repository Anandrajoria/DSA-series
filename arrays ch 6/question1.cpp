// ! calculate sum and product of all number in array

#include<iostream>
using namespace std;

int arraySum(int arr[],int size){
    int result=0;
    for (int i = 0; i < size; i++)
    {
        result+=arr[i];
    }
    return result;
}
int arrayProduct(int arr[],int size){
    int result=1;
    for (int i = 0; i < size; i++)
    {
        result*=arr[i];
    }
    return result;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    cout<<"sum of array ";
    cout<<arraySum(arr,size)<<" ";
    cout<<endl;
    cout<<"product of array ";
    cout<<arrayProduct(arr,size)<<" ";

    return 0;
}