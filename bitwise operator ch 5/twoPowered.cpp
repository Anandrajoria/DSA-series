// ! figure out how to find a number is power of 2 without any loop

#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    return (n>0) && ((n&(n-1))==0);
}
int findPower(int n){
    int power=0;
    while (n>1)
    {
        n>>=1;
        power++;
    }
    return power;
}
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    if (isPowerOfTwo(n)==1)
    {
        cout<<"2^"<<findPower(n);
    }else{
        cout<<"not the power of two";
    }
    
    
    return 0;
}