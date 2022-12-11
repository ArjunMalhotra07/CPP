#include<iostream>
using namespace std;

class AddString {
private:
	string s;
public:
    void setName(string str){
        s = str;
    }

    AddString operator < (AddString &obj){
        AddString res;
        res.s = s + obj.s;
        return res;
    }
    void print(){
        cout << "Copied is : " << s << endl; 
    }
};
void callbacks1(){
    AddString a1, a2, a4; 
	a1.setName("Arjun "); 
    a2.setName("M");
    a4.setName(" is my name");
    AddString a3 = a1 < a2 < a4;
    a3.print();
}
class AddString1 {
private:
	string s;
public:
    void setName(string str){
        s = str;
    }

    AddString1 operator < (AddString1 &obj){
        AddString1 res;
        res.s = obj.s;
        return res;
    }
    void print(){
        cout << "String is : " << s << endl; 
    }
};
void callbacks2(){
    AddString1 a1; 
	a1.setName("Arjun ");
    // a2.setName("M "); 
    AddString1 a3 = a1;
    a3.print();
}

int main()
{   
    callbacks1();
	
}
