// ****
// ****
// ****
// ****

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    
    for (int i = 1; i <= n; i++)  //! first loop is for row
    {
        char ch='A';
        for (int j = 1; j <=n ; j++) //? second loop is for column
        {
            cout<<ch;
            ch+=1;
        }cout<<endl;
    }

    return 0;
}