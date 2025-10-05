/* #include<iostream>
using namespace std;

int fibonacci(int n){

    int fib[n];

    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }

return fib[n-1];
}
int main()
{
     cout << "Last Fibonacci number: " << fibonacci(8) << endl;
    return 0;
}


*/


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;


    int a=0,b=1,c=1;
    for(int i=2;i<n;i++){
        cout << a << " "; 
        c=a+b;
        a=b;
        b=c;
    }
    // cout<<c;
    return 0;
}