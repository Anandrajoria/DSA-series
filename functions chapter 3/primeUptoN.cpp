// ! WAF to print all prime numbers from 2 to N

#include<iostream>
using namespace std;

int isPrime(int num){
    if(num<=1) return 0;

    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            return 0;
        }else{
            return 1;
        }
        
    }
    
}

int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<" ";
        }
        
    }
    
    return 0;
}