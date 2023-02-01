#include<iostream>
namespace using std;
#include<string>

class myclass {
    public:
    int mynum;
    string mystring;
};

int main() {
    myclass myobj;

    myobj.mynum = 15;
    myobj.mystring = "some txt";

    cout << myobj.mynum << "\n";
    cout << myobj.mystring << "\n";
    return 0;
}