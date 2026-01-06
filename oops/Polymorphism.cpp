// #include<iostream>
// using namespace std;
// class Calculator{
//     public:
//         int multiply(int a, int b){
//             return a*b;
//         }
//         int multiply(int a,int b,int c){
//             return a*b*c;
//         }
// };
// int main()
// {
//     Calculator m;
//     cout<<m.multiply(2,3)<<endl;
//     cout<<m.multiply(2,3,4)<<endl;
//     return 0;
// // }


// #include<iostream>
// using namespace std;
// class Shape{
//     public:
//         virtual void draw(){
//             cout<<"circle is drawing:"<<endl;
//         }
// };

// class Circle:public Shape{
//     public:
//     void draw(){
//         cout<<"circle"<<endl;
//     }
// }; 
// int main()
// {
//     Shape* S;
//     Circle c;
//     S=&c;

//     S->draw();
//     return 0;
// }



#include<iostream>
using namespace std;
class ComplexNumber{
    private:
        int R;
        int I;

    public:
        ComplexNumber(int real,int img){
            R=real;
            I=img;
        }

        void plus(const ComplexNumber &c){
            R=R+c.R;
            I=I+c.I;

        }

        void multiply(const ComplexNumber &c){
            int newReal=R*c.R - I* c.I;
            int newImg=R* c.I + I*c.R;


            R=newReal;
            I=newImg;
        }
         void print() {
        cout << R << " + i" << I << endl;
    }
};
int main()
{
    return 0;
}