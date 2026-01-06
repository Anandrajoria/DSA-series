// #include<iostream>
// using namespace std;
// class BankAccount{
// private:
//     float balance;
    
// public:
//     BankAccount(){
//         balance=0;
//     };

//     void setBalance(int val){
//         if(val>0){
//             balance=val;
//         }
//     }

//     float getBalance(){
//         return balance;
//     }

// };

// int main()
// {
//     BankAccount b1;;
//     b1.setBalance(2000);;
//     cout<<b1.getBalance();
//     return 0;
// }



#include<iostream>
using namespace std;
class Students{
    private:
        string studentName;
        int rollNo;
        int age;

    public:
        string getStudentName(){
            return studentName;
        }

        void setStudentName(string studentName){
            this->studentName=studentName;
        }

        int getrollNo(){
            return rollNo;
        }

        void SetRollNo(int rollNo){
            this->rollNo=rollNo;
        }

        int getAge(){
            return age;
        }

        void SetAge(int age){
            this->age=age;
        }
};

int main()
{
    Students obj;

    obj.setStudentName("aditya");
    obj.SetRollNo(101);
    obj.SetAge(22);

    cout << "Student Name : " << obj.getStudentName() << endl;    
    return 0;
}