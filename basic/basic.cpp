// first day of starting dsa

#include<iostream>
using namespace std;
int main(){
    // cout<<"aditya"<<endl<<"rajoriya"<<endl;
    
    // variables
    int age=25;
    cout<<sizeof(age)<<endl;   

    char grade='A';
    cout<<sizeof(grade)<<endl;

    // float price = 23.4;  this is double
    float price = 23.4f;   //this is float;
    cout<<price<<endl;

    return 0;
}

// ; => it is like terminator
// identifier => these are the special name of veriables

//! primitive data types
// int takes 4 bytes or 32 bits
// char takes 1 bytes
// float takes 4 bytes
// / bool takes 1 bytes
//  double takes 8 bytes

// ! type casting
/* converting data from one type to another 
1st type is implicit conversion in which compiler convert data type from small to larger automaticy */

#include<iostream>
using namespace std;
int main2(){
    char grade ='A';
    int value = grade;
    cout<<value;

    return 0;
}
