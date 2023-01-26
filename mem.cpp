#include<iostream>
#include<string>
using namespace  std;

int main() {
    string car="ford";
    string &a=car;
    string *str = &car;

    cout<<car<<" print what in the car"<<"\n";
    cout<<a<<" what in the referencing"<<"\n";
    cout<<str<<" whats inside str"<<"\n";
    cout<<*str<<" whats inside *str"<<"\n";
    *str="tesla";
    cout<<*str<<" i changed it value of *str"<<"\n";
    cout<<car<<" the calue of car is "<<"\n";
    cout<<a<<" the new value of a is "<<"\n";
    cout<<str<<" whats inside str"<<"\n";
}