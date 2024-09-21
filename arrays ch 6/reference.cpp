// !pass by reference

#include<iostream>
using namespace std;

void changArr(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        arr[i]=2*arr[i];
    }
    cout<<"in function"<<endl;
    cout<<endl;
    
}
int main()
{
    int arr[]={1,2,3};
    changArr(arr,3);
    cout<<"int main"<<endl;

    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}