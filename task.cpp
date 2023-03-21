//Create a class called "Person" with properties such as name, age, and occupation.

#include<iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;
    string occ;
};

int main(){
    Person a1;
    a1.name = "ram";
    a1.age = 18;
    a1.occ = "barber";

    cout << a1.name << endl;
    cout << a1.age << endl;
    cout << a1.occ << endl;
    return 0;
}
