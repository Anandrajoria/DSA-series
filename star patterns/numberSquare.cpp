#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"enter the number: ";
    cin>>n;

    
for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }cout<<endl;
    }

    return 0;
}


#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"enter the number: ";
    cin>>n;

    int num=1;
for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<num;
            num++;
        }cout<<endl;
    }

    return 0;
}


