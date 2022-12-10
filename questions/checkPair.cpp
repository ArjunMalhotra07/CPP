#include <iostream>
using namespace std;

class Area{
    public: 
        void check(int n[5]){
            for(int i = 0; i<5;i++){
                if(check2(n[i]) == true){
                    cout<<n[i]<<" is RIGHT\n";
                }else{
                    cout<<n[i]<<" is WRONG\n";
                }
            }
        }

        bool check2(int n){
            bool flag = false;
            int prev;
            while(n>0){
                prev = n%10;
                n=n/10;
                if(prev == 6  && n%10 ==4 ){
                    flag = true;
                }
            }
            return flag;
        }
};

int main(){

    cout << "Enter 5 Numbers ";
    int length;
    int numbers[5];
    for(int i = 0; i< 5; i++){
        cin >> length;
        numbers[i] = length;
    }
    Area obj;
    obj.check(numbers);
    return 0;
}