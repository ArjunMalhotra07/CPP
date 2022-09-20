// Example:

#include<iostream>
using namespace std;

class A
{
    private:
       int x;

    public :
       A(){
           x=10;
       }
    friend class B; //friend class
};

class B
{
 public:
  void display(A object)
  {
   cout<<endl<<"The value of x= "<<object.x << "\n";
  }
};

int main()
{
 A _a;
 B _b;
 _b.display(_a);
 return 0;
}
