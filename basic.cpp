#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    int index=0;
    int length=0;

    while (s[index]!='\0')
    {
        length++;
        index++;
    }
    cout<<"the length of string is: "<<length<<endl;
    
    return 0;
}