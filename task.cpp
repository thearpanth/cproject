//Create a class called "Employee" with properties such as name, salary, and department. Create a method in the "Employee" class that calculates the yearly salary.

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class employ{
    public:
    string name;
    string department;
    int salary;
    
    int ann(){
        return pow(salary,12);
    }
};

int main(){
    employ employ1;
    employ1.name = "raman";
    employ1.department = "enginnering";
    employ1.salary = 120000;

    cout << "employ name = " << employ1.name <<endl; 
    cout << "employ department = " << employ1.department << endl;
    cout << "employ salary = " << employ1.salary << endl;
    cout << "employ annual salary = " << employ1.ann() << endl;
    return 0;
}