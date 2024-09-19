//! convert binary to decimal
#include<iostream>
using namespace std;

int decConverter(int binNum){
    int ans=0,pow=1;

    while (binNum>0)
    {
        int rem=binNum%10;
        ans+=rem*pow;
        binNum/=10;
        pow=pow*2;
    }
    return ans;
}

int main()
{
    cout<<decConverter(110010)<<" ";
    return 0;
}