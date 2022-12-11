#include <iostream>
using namespace std;

class Complex{
    int real, img;

    public:

        void print(){
            cout << "Number is -- " << real << " + "<< img <<"i\n";
        }
        
        Complex(Complex &obj){
            cout << " Hello \n";
            real = obj.real;
            img = obj.img;
            
        }
        Complex(int a, int b){
            real = a;
            img = b;
        }

    
};


int main(){

    Complex c1(15, 10);
    Complex c2(c1);

    c2.print();
    
    return 0;
}
