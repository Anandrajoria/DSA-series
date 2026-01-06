// #include<iostream>
// using namespace std;
// int main()

// {
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;

    
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i;j++){
//         cout<<" ";
//     }
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }cout<<endl;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"enter the number: ";
    cin>>n;

    
for(int i=1;i<=n;i++){
    char ch='A';
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }cout<<endl;
    }

    return 0;
}


