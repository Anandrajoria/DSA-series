// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the numebr: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }

//     for(int j=1;j<=i;j++){
//         char ch='A'+j-1;
//         cout<<ch;
    
//     }
//     cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the numebr: ";
    cin>>n;
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                cout<<j;
            }else{
                cout<<ch;
                ch++;
            }
        }cout<<endl;
    }
    
    
    return 0;
}