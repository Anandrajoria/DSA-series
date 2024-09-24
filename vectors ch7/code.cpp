#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int>v={1,2,3};   //size=0
    // vector<int>v2(3,4);   //first i size and second is value
    // for(int i:v2){
    //     cout<<i<<endl;
    // }

    vector<int>vec;

    cout<<"size="<<vec.size()<<endl;

    vec.push_back(1);   //add 
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(1);   
    vec.push_back(1);   

    cout<<"capcity="<<vec.capacity()<<endl;

    vec.pop_back();     //delete last element    

    for(int val:vec){
        cout<<val<<endl;
    }

    cout<<"front is="<<vec.front()<<endl;
    cout<<"back is="<<vec.back()<<endl;

    cout<<"size="<<vec.size()<<endl;
    cout<<vec.at(4);    

    return 0;
}
