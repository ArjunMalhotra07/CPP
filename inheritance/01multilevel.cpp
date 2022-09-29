#include <iostream>
using namespace std;

class parent{
    public : 
        void print(){
            cout<<"Print statement called in GrandParent Class \n";
        }
};

class child : public parent{
        public : 
        void printChild(){
            cout<<"Print statement called in parent Class \n";
        }
};
class grandChild : public child{
        public : 
        void printGrandchild(){
            cout<<"Print statement called in Grand child Class \n";
        }
};

int main(){

    grandChild obj;
    obj.print();
    obj.printChild();
    obj.printGrandchild();

    return 0;
}