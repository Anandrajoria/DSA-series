#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;

    bool isprime=true;
        for ( int i = 2; i<=n-1; i++)
        {
            if(n%i==0){
                isprime=false;
                break;
            }else{
                isprime=true;
                break;
            }
        }
        if (isprime==true)
        {
            cout<<"prime";
        }else{
            cout<<"not prime";
        }
        
    
    return 0;
}