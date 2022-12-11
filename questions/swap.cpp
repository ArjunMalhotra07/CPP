#include <iostream>
using namespace std;

class A{
    public :
        void passByValue(int a , int b){
            int temp = a;
            a = b;
            b = temp;
            cout << "In func -- " << endl;
            cout << "A = " << a << endl;
            cout << "B = " << b << endl;
        }
        void passByRef(int* c , int* d){
            int temp = *c;
            *c = *d;
            *d = temp;
            cout << "In func -- " << endl;
            cout << "C = " << *c << endl;
            cout << "D = " << *d << endl;
        }
};
void passByValueCall(){
    A obj;
    int a = 10;
    int b = 20;
    obj.passByValue(a,b);
    cout << "In Main -- " << endl;
    cout << "C = " << a << endl;
    cout << "D = " << b << endl;
}
void passByRefCall(){
    A obj;
    
    int c = 50;
    int d = 100;
    obj.passByRef(&c,&d);
    cout << "In Main -- " << endl;
    cout << " C = " << c << endl;
    cout << " D = " << d << endl;
}
int main(){
//    passByValueCall();
   passByRefCall();

}