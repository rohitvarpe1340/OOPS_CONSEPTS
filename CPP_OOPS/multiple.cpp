#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    string name;
    int rollNum;
    Student(string name , int rollNum){
        this->name = name;
        this->rollNum= rollNum;
    }
};
class Teacher{
   public:
   string subject;
   double salary;
   Teacher(string subject , double salary){
    this->subject = subject;
    this->salary = salary;
   }
};
class TeacherAssistant : public Student , public Teacher{
    public:
    string department;

    TeacherAssistant(string name, int rollNum, string subject, double salary, string department)
    :Student(name,rollNum),Teacher(subject,salary){
        this->department = department;
    }
    void display(){
        cout<<"name :"<<name<<endl;
        cout<<"roll num :"<<rollNum<<endl;
        cout<<"subject :"<<subject<<endl;
        cout<<"salary :"<<salary<<endl;
        cout<<"department :"<<department<<endl;
    }
};
int main(){
    TeacherAssistant t1("Mr.rohit",21,"java",50000,"MCA");
    t1.display();
    return 0;
}