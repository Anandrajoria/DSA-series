#include<iostream>
using namespace std;
int main()
{
    int arr[8]={1,2,3,4,5,6,7};
    int size=7;
    int element,pos,i;
    cout<<"enter postion and element ";
    cin>>pos;
    cin>>element;

    if(pos<=size && pos>=0){
        for(i=size;i>pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos]=element;
        size++;
        for(i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }else{
        cout<<"invalid paramenter";
    }
    return 0;
}