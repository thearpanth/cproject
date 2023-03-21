//Create a method in the "Circle" class that calculates the area of the circle.

#include<iostream>
#include<cmath>
using namespace std;

class circle{
    public:
    float radius;

    float cal(){
        return M_PI * pow(radius,2);
    }
};

int main(){
    circle circle1;
    cout << "enter the area of the circle";
    cin >> circle1.radius;

    float area = circle1.cal();
    cout << area;
    return 0;
}
