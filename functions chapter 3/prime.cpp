// ! WAF to check if a number is prime or not.

#include<iostream>
using namespace std;

int isPrime(int num){
    int result=0;
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            result=1;
        }
    }
    return result;
}

int main()
{
    if (isPrime(2)==0)
    {
        cout<<"no is prime";
    }else{
        cout<<"number is not prime";
    }
    
    return 0;
}