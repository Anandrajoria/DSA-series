// ! calculate N factorial

#include<iostream>
using namespace std;

int factorial(int n){
    int sum=1;

    for (int i = 1; i <=n; i++)
    {
        sum*=i;
    }
    return sum;
    
}
int main()
{
    cout<<factorial(4);
    return 0;
}