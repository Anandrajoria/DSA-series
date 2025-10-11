// https://www.naukri.com/code360/problems/even-or-odd_7463066?topList=ninjas-sde-sheet&problemListRedirection=true

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if((n&1)==0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
    
    return 0;
}