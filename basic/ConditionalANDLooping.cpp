// conditional statements
#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cout<<"enter num"<<endl;
    // cin>>n;
    // if (n>=0)
    // {
    //     cout<<"positive";
    // }else{
    //     cout<<"negative";
    // }

    // if (n%2==0)
    // {
    //     cout<<"even no";
    // }else{
    //     cout<<"odd no";
    // }
    
    // int marks;
    // cout<<"enter marks "<<endl;
    // cin>>marks;
    // if(marks>=90){
    //     cout<<"A\n";
    // }else if(marks>=80 && marks<90){
    //     cout<<"B\n";
    // }else{
    //     cout<<"C\n";
    // }
    
    // ! check weather character is uppercase or lowercase
    // char letter;
    // cout<<"enter any character:";
    // cin>>letter;

    // if (int(letter)>=65 && int(letter)<=90)
    // {
    //     cout<<"uppercase";
    // }else{
    //     cout<<"lowercase";
    // }
    
    // int n;
    // cout<<"enter num"<<endl;
    // cin>>n;
    // cout<<(n%2==0 ? "positive" : "negative")<<endl;

    //----------------------------=>loops<=----------------------------//
    //! while loops
    // int count = 10;
    // while (count>=0)
    // {
    //     cout<<count<<" ";
    //     count--;
    // }

    // ! for loops 
    // for (int i = 1; i <= count; i++)
    // {
    //     cout<< i <<" ";
    // }

    // ? sum of numbers from 1 to n
    int n,sum=0;
    cout<<"enter n:";
    cin>>n;

    // for (int i = 1; i <= n; i++){
    //     sum=sum+i;
    // }

    // ! using while loop
    // int i=1;
    // while (i<=n)
    // {
    //     sum+=i;
    //     i++;
    // }
    // cout<<sum;
    
    //? sum of all odd numbers from 1 to n
    // for (int i = 0; i <= n; i++)
    // {
    //     if (i%2!=0)
    //     {
    //         sum+=i;
    //     }
        
    // }

    // ! using while loop
    int i=0;
    // while (i<=n)
    // {
    //     if(i%2!=0){
    //         sum+=i;
    //     }
    //     i++;
    // }
    
    // cout<<sum;

    // ? do while loop
    do
    {
        cout<<i<<" ";
        i++;
    } while (i<=n);
    
    return 0;
}

