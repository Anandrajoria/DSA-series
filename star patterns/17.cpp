#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"enter the number: ";
    cin>>n;

    int nsp=n/2;
    int nst=1;
    int ml=n/2+1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=nsp;j++){
        cout<<" ";
    }
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }else{
            nsp++;
            nst-=2;
        }
        
        cout<<endl;
    }

    return 0;
}

