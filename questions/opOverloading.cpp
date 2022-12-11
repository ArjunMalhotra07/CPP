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

int main()
{   
    AddString a1, a2; 
	a1.setName("Arjun "); 
    a2.setName("M");
    AddString a3 = a1 < a2;
    a3.print();
	
}
