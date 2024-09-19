// ! convert decimal to binary

#include<iostream>
using namespace std;

int decNum(int num){
    int ans=0,pow=1;
    while (num>0)
    {
        int reminder=num%2;
        // int qutoint=reminder/2;
        num/=2;
        ans+=(reminder*pow);
        pow=pow*10;
    }
    return ans;
}

int main()
{
    cout<<decNum(50)<<" ";
    return 0;
}