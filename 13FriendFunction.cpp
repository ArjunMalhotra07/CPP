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

        friend Complex add(Complex o1, Complex o2);
};

Complex add(Complex obj1, Complex obj2){
    Complex c;
    c.setNumber(obj1.real + obj2.real , obj1.img + obj2.img); 
    return c;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(5,10);
    c2.setNumber(15,20);
    c1.print();
    c2.print();

    sum = add(c1, c2);
    sum.print();
    return 0;
}