#include <iostream>
using namespace std;

class Prime{
    public :
        void checkPrime(int numbers[5]){
            int sum = 0;
            for(int i = 0; i< 5; i++){
                if(checkPrimeHelper(numbers[i]) == true){
                    sum += numbers[i];
                }
            }
            cout << "Sum :  " << sum << "\n";
        }
        bool checkPrimeHelper(int n){
            for(int i = 2; i< n; i++){
                if(n % i == 0){
                    return false;
                }
            }
            return true;
        }
};  

int main(){
    int inputArray[5];
    int n;
    cout << " 5 Numbers \n";
    for(int i = 0; i< 5; i++){
        cin >> n;
        inputArray[i] = n;
    }

    Prime p;
    p.checkPrime(inputArray);

}