#include<iostream>
using namespace std;
int main()
{
    int arr[8]={2,5,6,70,89,54,34};
    int size=7;
    int element,pos,i;
    cout<<"enter position and element ";
    cin>>pos;
    cin>>element;

    if(pos<=size &&  pos>=0){
        for(i=size;i>pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos]=element;
        size++;
        for(i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        cout<<"invalid postion";
    }
    return 0;
}