#include <iostream>
using namespace std;

class Student{
     string  name;
     string education;
     int age;
     double mark;

     public:
     Student(string n, string edu , int a , double m){
        this->name = n;
        this->education = edu;
        this->age = a;
        this->mark = m;

     }

    void display(){
       cout<<"student name:"<<name<<endl;
       cout<<"student qualification :"<<education<<endl;
       cout<<"student age:"<<age<<endl;
       cout<<"student marks:"<<mark<<endl;
     }
};
int main(){
    Student s1("rohit","MCA",22,66.90);
    s1.display();
    return 0;
}