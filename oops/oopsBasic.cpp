// #include<iostream>
// using namespace std;

// class Ractangle{
// public:
//     int l;
//     int b;
//     Ractangle(){ //default constructure=> no  argument pass
//         l=0;
//         b=0;
//     }

//     Ractangle(int x , int y){ //paramerterize construtor=> arguments are pass
//         l=x;
//         b=y;
//     }

//     Ractangle(Ractangle& r){ //copy constructor - initilize an object by another existed
//         l=r.l;
//         b=r.b;
//     }
// };


// int main()
// {
//     Ractangle r1;
//     cout<<r1.l<<" "<<r1.b<<endl;

//     Ractangle r2(2,3);
//     cout<<r2.l<<" "<<r2.b<<endl;

//     Ractangle r3=r2;
//     cout<<r3.l<<" "<<r3.b;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Animal{
// public:
//     bool giveBirth;
//     bool ground;
// };
// int main()
// {
//     Animal mammal;
    
//     mammal.giveBirth=true;
//     mammal.ground=true;

//     Animal amphibns;

//     amphibns.giveBirth=false;
//     amphibns.ground=true;

    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Student{
// public:
//     string name;
//     int age;

//     Student (string n , int a){
//         name=n;
//         age=a;
//     }

//     Student(const Student &s){
//         name=s.name;
//         age=s.age;
//     }

//     void display(){
//         cout << name << " " << age << endl;
//     }
// };
// int main()
// {
//     Student s1("Amit", 21);
//     Student s2 = s1;   // copy constructor called

//     s2.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class SmartPhone{
// private:
//     string model;
//     int year;
//     bool isSupport;

// public:
//     SmartPhone(string mod,int manu,bool isSupp){
//         model=mod;
//         if(manu>2000)
//             year=manu;
//         else
//             year=2000;
//         isSupport=isSupp;
//     }

//     string getModel(){
//         return model;
//     }
//     int getyear(){
//         return year;
//     }

//     bool getSupport(){
//         return isSupport;
//     }

//     void setYear(int y){
//         if(y>2000){
//             year=y;
//         }
//     }
//     void print(){
//         cout << "Model : " << model << endl;            
//         cout << "Year of Manufacture : " << year << endl;            
//         cout << "5g Supported : " << isSupport << endl;  
//     }
// };
// int main()
// {
//     // SmartPhone S1("samsung S23",2023,true);
//     // S1.print();

//     SmartPhone* S1=new SmartPhone("samsung S23",2023,true);
//     S1->print();
//     delete S1;

//     SmartPhone iphone("iphone 11", 1200, true);
//     SmartPhone redmi("redmi", 2012, false);
//     SmartPhone onplus("oneplus", 2219, true);

//     iphone.print();

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Car{
// public:
//     string model;
//     int year;

//     Car(){
//         model="Unknown";
//         year=0;
//     }
//     ~Car(){
//         model="Unknown";
//         year=0;
//         cout<<"desctructure is called:"<<endl;
//     }
//     Car(string name, int age){
//         model=name;
//         year=age;
//     }
//     Car(const Car &fourwheeler){
//         model=fourwheeler.model;
//         year=fourwheeler.year;
//     }

//     void display(){
//         cout<<model<<" "<<year<<endl;
//     }

    
// };
// int main()
// {
//     Car c1;
//     Car c2("honda cou",2022);
//     Car c3=c2;

//     c1.display();
//     c2.display();
//     c3.display();

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Mobile{
//     string model;
//     int year;

// public:
//     void set_details(string model,int year){
//         this->model=model;
//         this->year=year;
//     }
//     void print(){
//         cout << this->model << endl;
//         cout << this->year << endl;
//     }
// };
// int main()
// {
//     Mobile redmi;
//     redmi.set_details("note 7 pro",2003);
//     redmi.print();
//     return 0;
// }

#include<iostream>
#include <cstring>
using namespace std;
class Student{
    int age;
    char *name;

    public:
        Student(int age, char * name){
            this->age=age;

            this->name=new char[strlen(name)+1];
            strcpy(this->name,name);
        }

        //copy constructor
        Student(const Student& s){
            age=s.age;
            name=new char[strlen(s.name)+1];
            strcpy(name,s.name);
        }

        ~Student(){
            delete[] name;
        }
            void display() {
        cout << "Age: " << age << endl;
        cout << "Name: " << name << endl;
    }

};
int main()
{
    
    Student s1(20, "Rahul");
    Student s2=s1;
    s1.display();
    s2.display();

    return 0;
}