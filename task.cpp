//Create a class called "Vector" with properties such as magnitude and direction. Create a method in the "Vector" class that calculates the dot product of two vectors.

#include<iostream>
#include<cmath>
using namespace std;

class vector{
    public:
    int a,b,o;
    int c(){
        int d = a*b*cos(o);
        return d;
    }
};

int main(){
    vector ve;
    cout << "enter the 1at magnitude " ;
    cin >> ve.a;
    cout << " enter the second vector " ;
    cin >> ve.b;
    cout << "enter the angle between them "; 
    cin >> ve.o;

    cout << "the dot product is " << ve.c() << endl;
    return 0;
}