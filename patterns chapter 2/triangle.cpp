#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    
    // for (int i = 0; i < n; i++)
    // {
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*";
    //     }cout<<endl;
    // }

    // char ch='A';
    // for (int i = 0; i < n; i++)
    // {
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch;
    //         // cout<<i+1;

    //     }
    //     ch=ch+1;
    //     cout<<endl;
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
    
    
    return 0;
}