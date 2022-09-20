#include <iostream>
using namespace std;

int main(){
    cout << "Enter Number ";
    int number;
    cin >> number;

    cout << "Enter name ";
    string name;
    cin >> name;

    for(int i=0; i<number; i++){
        cout<<i<<" \n";
    }


     for(int i=0; i<name.length(); i++){
        cout<<name[i]<<" \n";
    }
}
