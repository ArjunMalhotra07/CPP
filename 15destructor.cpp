#include <iostream>  

using namespace std;  
class Hello {  
public:  
  //Constructor  
  Hello () {  
    cout<< "Constructor function is called" <<endl;  
  }  
  //Destructor  
  ~Hello () {  
    cout << "Destructor function is called" <<endl;  
   }  
   //Member function  
   void display() {  
     cout <<"Hello World!" <<endl;  
   }  
};  
int main(){  
   //Object created  
   Hello obj;  
   //Member function called  
   obj.display();  
   return 0;  
} 