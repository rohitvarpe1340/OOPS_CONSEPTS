#include <iostream>
using namespace std;

class ShowResult{
   public :
   //function overloading...
   void add(int a, int b){
    cout<<"sum is:"<<a+b<<endl;
   }

   void add(int a, double b){
    cout<<"sum is:"<<a+b<<endl;
   }

};
int main(){

    ShowResult s1;
    s1.add(10,20);
    s1.add(10,20.5);
    return 0;
}