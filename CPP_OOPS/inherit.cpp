#include <iostream> 
#include <string>
using namespace std;
class Person{
    public:
    int empId;
    string name;

    Person(int empId, string name){
        this-> empId = empId;
        this-> name = name;

    }
  };

class Employee : public Person{
     public : 
     double salary;

     Employee(int empId, string name, double salary)
        :Person(empId,name){
        this->salary = salary;
     }

     void getinfo(){
        cout<<"emp id: "<<empId<<endl;
        cout<<"emp name: "<<name<<endl;
        cout<<"emp salary:"<<salary<<endl;
     }
};
int main(){
  Employee e1(1,"rohit",44.66);
  e1.getinfo();


    return 0;
}