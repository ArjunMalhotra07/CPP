#include <iostream>
using namespace std;

class Area{
    private:
        int length;
        int breadth;
        int areaofRectangle;
    public: 
        // Setter
        void areaOfRect(int l,int b){
            length = l;
            breadth = b;
            areaofRectangle = l * b;
        }
        // Getter
        int getArea(){
            return areaofRectangle;
        }
};

int main(){

    cout << "Enter length ";
    int length;
    cin >> length;
    cout << "Enter breadth ";
    int breadth;
    cin >> breadth;

    Area obj;
    obj.areaOfRect(length,breadth);
    int area = obj.getArea();
    cout << "Area "<< area <<"\n";
    return 0;
}