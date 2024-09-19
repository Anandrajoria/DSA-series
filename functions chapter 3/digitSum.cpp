// ! calculete sum of digit of a number

#include<iostream>
using namespace std;

int digitSum(int num){
    int result=0;
    while (num>0)
    {
        int lastdigit=num%10;
        num=num/10;
        result+=lastdigit;
    }
    return result;
    
}

int main()
{
    int sum=digitSum(12);
    cout<<sum;
    return 0;
}