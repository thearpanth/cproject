//Create a class called "Car" with properties such as make, model, and year.

#include<iostream>
#include<string>
using namespace std;

class car{
  public:
  string model;
  int year; 
};

int main(){
    car tesla;

    tesla.model = "x";
    tesla.year = 2012;

    cout << tesla.model << endl;
    cout << tesla.year << endl;
    return 0;
}