// ! WAF to print nth fibonacci term

#include<iostream>
using namespace std;

int fibonacci(int num){
    int a=0,b=1,result=0;
    for (int i = 2; i <= num; i++)
    {
        result=a+b;
        a=b;
        b=result;
    }
    return result;
    
}

int main()
{

    int n;
    cout<<"enter n:";
    cin>>n;

    cout<<fibonacci(n)<<endl;
    return 0;
}