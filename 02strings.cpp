#include <iostream>
using namespace std;

int main() {
 
  string name;
  

  const int finalNumber = 500;
  string firstName , secondName;



  cout << "Enter Name ";
  cin >> firstName; 
  cout << firstName <<"\n";

    cout << "Enter 2nd Name ";
  cin >> secondName; 
  cout << secondName <<"\n";

  cout << "Your full name is : " << firstName + " "+ secondName+"\n";


  return 0;
}
