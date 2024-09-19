/*
return_type funName(t1,t2...){     t1 and t2 are parameters
        !do some work
        
    }
*/

#include<iostream>
using namespace std;

double sum(double a, double b){
    return a+b;
}

int min(int a,int b){
    if (a>b)
    {
        return b;
    }else{
        return a;
    }
    
}
int main()
{
    cout<<min(8,2);  //! actual values of arguments

    
    return 0;
}

