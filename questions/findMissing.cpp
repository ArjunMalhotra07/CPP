#include <iostream>
using namespace std;

class Search{
    public :
        void binarySearch(string n){
            int num = stoi(n);
            int number[n.length()];
            int index = 0;
            while(num > 0){
                int r = num % 10;
                num/=10;
                number[index] = r;
                index ++;
            }
            cout << &number;
        }
      
};  
int main(){
    string n;
    cout << "Enter String \n";
    cin >> n; 
    Search p;
    p.binarySearch(n);

}