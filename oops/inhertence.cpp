// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//     void eat(){
//         cout<<"animal is eating"<<endl;
//     }
// };

// class Dog: public Animal{
//     public:
//     void bark(){
//         cout<<"dog is barking"<<endl;
//     }
// };
// int main()
// {
//     Dog d;
//     d.eat();
//     d.bark();
//     return 0;
// }

#include<iostream>
using namespace std;
class Vehicle{
    public:
        string color;
        int max_speed;
};

class Car:public Vehicle{
    protected:
    int num_gears;
};
class Od: public Car{
    public:
    bool is_automatic;

    void setDetails(){
        color="red";
        max_speed=120;
        num_gears=5;
    }
    void display() {
        cout << color << endl;
        cout << max_speed << endl;
        cout << num_gears << endl;
        cout << is_automatic << endl;
    }
};


int main()
{
    Od obj;
    obj.setDetails();
    obj.display();
        return 0;
}

