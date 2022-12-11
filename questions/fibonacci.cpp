#include <iostream>
using namespace std;

class Prime{
    public :
        int x = 0;
        int y = 1;
        int z = x+y;
        void printFibonacci(int n){
            cout << x << " " << y << " ";
            while(z<n){
                cout << z << " ";
                x = y;
                y = z;
                z = x+y;
            }
        }
       
};  

int main(){
    int n;
    cout << "Enter N \n";
    cin >> n;
    Prime p;
    p.printFibonacci(n);

}