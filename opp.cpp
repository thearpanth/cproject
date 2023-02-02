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

int main() {
    car mycar;
    mycar.honk();
    cout << mycar.brand + " " + mycar.model;
    return 0;
}