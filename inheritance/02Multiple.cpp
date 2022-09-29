#include <iostream>
using namespace std;

class one{
    public :
        void printFunc1(){
            cout<<"Print Function 1 \n";
        }
};
class two{
    public :
        void printFunc2(){
            cout<<"Print Function 2 \n";
        }
};
class three : public one, public two{
    public :
        void printFunc3(){
            cout<<"Print Function 3 \n";
        }
};

int main(){

    three object;
    object.printFunc1();
    object.printFunc2();
    return 0;
}