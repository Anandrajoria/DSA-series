#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the numebr: ";
    cin>>n;

    if(n%2==0){
        cout<<"enter valid number";
    }else{
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int t=n/2+1;
            if(j==t||i==t) cout<<"*";
            else cout<<" ";
        }cout<<endl;
    }}
    return 0;
}