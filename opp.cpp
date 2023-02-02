#include<iostream>
using namespace std;
#include<string>

class car {
    public:
    string brand, model;
    int year;
    car(string x, string y, int z) {
        brand = x;
        model = y;
        year = z;
    }
};

int main() {
    car carobj1("BMW","x5",1999);
    car carobj2("ford","mustang",1968);

    cout << carobj1.brand << " " << carobj1.model << " " << carobj1.year <<"\n";
    cout << carobj2.brand << " " << carobj2.model << " " << carobj2.year << "\n";
return 0;
}