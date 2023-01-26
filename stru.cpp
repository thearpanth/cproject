#include<iostream>
using namespace std;
#include<string>

int main() {
    //car type

    struct car{
        string brand;
        string model;
        int year;
    };
    car car1;
    car car2;
    car car3;

    car1.brand="ford";
    car1.model="T";
    car1.year=1945;

    car2.brand="Tesla";
    car2.model="X";
    car2.year=2012;

    car3.brand="tesla";
    car3.model="S";
    car3.year=2016;

    cout<<car1.brand<<" "<<car1.model<<" "<<car1.year<<"\n";
    cout<<car2.brand<<" "<<car2.model<<" "<<car2.year<<"\n";
    cout<<car3.brand<<" "<<car3.model<<" "<<car3.year<<"\n";
    return 0;

}