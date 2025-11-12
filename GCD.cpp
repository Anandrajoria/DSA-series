#include<iostream>
using namespace std;

int calcGCD(int n, int m){
    // Write your code here.
    while (m!=0)
    {
        int temp=n%m;
        n=m;
        m=temp;
    }
    return n;
    
}

int main()
{
    int result=calcGCD(10,20);
    cout<<result;
    return 0;
}