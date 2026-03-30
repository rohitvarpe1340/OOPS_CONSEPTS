#include <iostream>
#include <string>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string name , int age){
        this->name =name;
        this->age = age;
    }

};
class Student : public Person{
    public:
    int rollNum;
    Student(string name , int age , int rollNum)
    :Person(name,age){
      this->rollNum = rollNum;
    }
};
class GradStudent :public Student{
    public:
    string researchTopic;

    GradStudent(string name, int age,int rollNum, string researchTopic)
    :Student(name,age, rollNum){
       this->researchTopic = researchTopic;
    }
    void display(){
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"roll number :"<<rollNum<<endl;
        cout<<"research topic :"<<researchTopic<<endl;
    }
    
};

int main(){
    GradStudent g1("rohit",22,21,"AI");
    g1.display();
    return 0;
}
