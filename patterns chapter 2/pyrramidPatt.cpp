/*  1
   121
  12321
 1234321
*/


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = n-(i+1); j > 0; j--)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= i+1; j++)
        {
            cout<<j;
        }  
        for (int j = i; j >= 1; j--)
        {
            cout<<j;
        }

        
        cout<<endl;
    }
    
    return 0;
}