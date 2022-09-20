#include <iostream>
using namespace std;

int main(){
    cout<<"Enter Name ";
    string name;
    getline(cin, name);

    cout<<"Enter 2nd Name ";
    string name2;
    getline(cin, name2);

    cout<<"Entered Name "<<name<<" \n";

    name.push_back('A');
    cout<<"After push back operation "<<name<<" \n";
    
    name.pop_back();
    cout<<"After pop back operation "<<name<<" \n";

    cout<<"length of name "<<name.length()<<" \n";

    name.swap(name2);
    cout<<name<<"\n";
    cout<<name2<<"\n";

}