#include<iostream>
using namespace std;

bool isPrime(int x){
    if(x<=1) return false;
    for(int i=2;i*i<x-1;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    cout<<isPrime(3);
    return 0;
}