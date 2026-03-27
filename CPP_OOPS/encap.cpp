#include <iostream>
#include <string>
using namespace std;

class BankAccount{
   public:
   string userName;
   string address;

   private:
   double balance;

   public:
   BankAccount(string n,string a){
        this->userName= n;
        this->address = a;
        this->balance = 0;
     }

   public:
     //setter
     void deposit(double amount){
        balance += amount;
     }

     //getter
     double getBalance(){
        return balance;
     }
     void withdraw(double amount){
      if(amount > 0 && amount <= balance){
         balance -= amount;
      }else{
        cout<<"No balance available..."<<endl;;
      }
     }

     void display(){
        cout<<"user name :"<<userName<<endl;
        cout<<"user address:"<<address<<endl;
     }
};

int main(){
    BankAccount b1("rohit","pune");
    b1.display();
    b1.deposit(500);
    cout<<" first balance :"<<b1.getBalance()<<endl;
    b1.withdraw(300);
    cout<<" after withdraw balance :"<<b1.getBalance();
    return 0;
}