#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;

    // for (int i = 0; i <n; i++)
    // {
    //     for (int j = i+1; j > 0; j--)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    char ch='A';
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout<<char('A'+j);
        }
        // ch++;
        cout<<endl;
    }
    
    
    return 0;
}