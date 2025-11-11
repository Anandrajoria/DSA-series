#include<iostream>
#include <algorithm> 
#include<vector>
using namespace std;
string stringSum(string &num1, string &num2) {
    int i=num1.length()-1;
    int j=num2.length()-1;
    int carry=0;

    string result="";
    while(i>=0||j<=0||carry!=0){
        int sum=carry;
        if(i>=0) sum+=num1[i--]-'0';
        if(j>=0) sum+=num2[j--]-'0';

        result+=(sum%10)+'0';
        carry=sum/10;
    }
    reverse(result.begin(), result.end());
    return result;
}
int main()
{

    return 0;
}