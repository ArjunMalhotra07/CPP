#include <iostream>
using namespace std;

class SalaryClass{
    protected:
        int salary;
};

class inherited : public SalaryClass  {
    public:
        void setSalary(int s){
            salary = s;
        }

        int getSalary(){
            return salary;
        }
};

int main(){
    cout << "Enter salary : "<<"\n";
    int salaryIncome;
    cin >> salaryIncome;
    
    inherited obj;
    obj.setSalary(salaryIncome);
    cout<<obj.getSalary()<<"\n";
    
    
    
}