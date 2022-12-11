#include <iostream>
using namespace std;

int main(){
    string s = " my university name is guru nanak dev uni";
    cout << s << endl;
    cout << s[6] << endl;
    char check = ' ';
    for(int i = 0 ; i<s.length(); i ++ ){
        if(s[i] != check){
            cout << s[i];
        }
    }
    cout << endl;
}