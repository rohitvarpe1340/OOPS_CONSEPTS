#include <iostream>
#include <string>
using namespace std;
class Person{
public:
string name;
int age;
   Person(string name, int age){
    this->name= name;
    this->age=age;
   }
};
class Student : public Person{
public :
 int rollNo;
   Student(string name , int age , int rollNo)
   :Person(name,age){
    this->rollNo= rollNo;
   }
   void getinfo(){
    cout<<"name :"<<name<<endl;
    cout<<"age :"<<age<<endl;
    cout<<"roll :"<<rollNo<<endl;
   }
};
class Teacher : public Person{
    public:
    string subject;

    Teacher(string name, int age , string subject)
    :Person(name , age){
      this->subject = subject;
    }
    void display(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"sub :"<<subject<<endl;
    }

};
int main(){
    Student s1("rohit",22,01);
    s1.getinfo();
    cout<<endl;
    Teacher t1("sai",56,"c++");
    t1.display();
    return 0;
}