#include <iostream>
using namespace std;

class Complex{
    int real, img;

    public:

        void setNumber(int a, int b){
            real = a;
            img = b;
        }

        void print(){
            cout << "Number is -- " << real << " + "<< img <<"i\n";
        }
        
        Complex(Complex &obj){
            cout << " Hello \n";
            real = obj.real;
            img = obj.img;
            
        }
        Complex(){
            
        }

    
};


int main(){
    Complex c1;

    c1.setNumber(15, 10);
    Complex c2(c1);

    c2.print();
    
    return 0;
}
