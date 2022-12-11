#include <iostream>
using namespace std;

class Test{
    public :
        void test1(){
            int a = 50;
            int* b = &a;

            cout << *b << endl;
            *b = 80;
            
            cout << a << endl;

            a = 70;
            cout << *b << endl;

            int marks[4] ={10,20,30,40};
            int* p = marks;
            cout<< *p << endl;
            cout << p << endl;
            p++;
            cout<< *p << endl;
            cout << p << endl;
        }
        void test2(){
            
            char *names[] = {"Arjun", "Malhotra" , "Books"};
            cout << *names << endl;
            cout << *(names+1) << endl;
            cout << *(names+2) << endl;
            cout << *(names+3) << endl;
        }
};

int main(){
   
   Test t;
//    t.test1();
   t.test2();
    
    return 0;
}
