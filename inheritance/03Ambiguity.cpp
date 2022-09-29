#include <iostream>
using namespace std;

class one{
    public :
        void printFunc(){
            cout<<"Print Function 1 \n";
        }
};
class two{
    public :
        void printFunc(){
            cout<<"Print Function 2 \n";
        }
};
class three : public one, public two{
   
};

int main(){

    three object;
    object.one::printFunc();
    object.two::printFunc();
    return 0;
}