// ! reverse the integer
#include<iostream>
using namespace std;

int reverseInt(int num){
    int reversed=0;

    while (num!=0)
    {
        int reminder=num%10;
        reversed=reversed*10 + reminder;
        num/=10;
    }
    return reversed;
    
}

int main()
{
    cout<<reverseInt(123456);
    return 0;
}