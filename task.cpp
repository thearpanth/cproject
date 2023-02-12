
//Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. 
//Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.

#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    int roll_no;   
}
int main() {
    student a;
    a.name = "arpan";
    a.roll_no = 1;
    cout << a.name<<endl;
    cout << a.roll_no<<endl;

    return 0;    
}