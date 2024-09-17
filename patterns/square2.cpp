// 123
// 456
// 789

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    char ch='A';
    for (int i = 1; i <= n; i++)
    {
        // char ch='A';
        for (int j = 1; j <=n ; j++)
        {
            cout << ch++<<" ";
        }cout<<endl;
        
    }   
    

    return 0;
}