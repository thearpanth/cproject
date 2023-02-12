
//Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively 
//by creating two objects of the class 'Student'.

#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    int number;
    int roll_no;   
};

int main() {
    student john,sam;

    john.number = 9800;
    sam.number = 9700;
    john.roll_no = 1;
    sam.roll_no = 2;

    cout <<"roll"<<"   "<<"num"<<endl;
    cout <<john.roll_no<<"      "<<john.number<<endl;
    cout <<sam.roll_no <<"      "<<sam.number<<endl;

    return 0;    
}