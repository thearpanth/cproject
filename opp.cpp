//inheritance
#include<iostream>
using namespace std;
#include<string>
class veh {
    public:
    string brand = "volvo";
    void honk() {
        cout << " ti ti \n";
    }
};

class car: public veh {
    public: 
    string model = "mustang";
};

class veh1: public veh {
    public:
    void myfun(){
        cout << "its better than veh0 \n";
    }
};

class veh2: public veh1 {
    public:
    void myfun1(){
        cout << "its improved than veh1 \n";
    }
};

int main() {
    car mycar;
    veh1 mycar1;
    veh2 mycar2;
    mycar.honk();
    cout << mycar.brand + " " + mycar.model<<"\n";
    mycar1.myfun();
    mycar2.myfun1();
    return 0;
}