// #include<iostream>
// #include<cstring>
// #include<string>
// #include<vector>
// using namespace std;
// void reverseString(vector<char>&s){
//     int str=0,end=s.size()-1;

//     while(str<end){
//         swap(s[str++],s[end--]);
//     }
// }
// int main()
// {
//     vector<char>s={'a','b','c'};
//     reverseString(s);
//     for(char c:s){
//         cout<<c;
//     }
//     cout<<endl;
//     return 0;
// }




#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    string str = "asdas asdf";

    reverse(str.begin(), str.end());  // reverses in place

    cout << "Reversed string: " << str << endl;

    return 0;
}