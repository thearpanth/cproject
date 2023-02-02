#include<iostream>
using namespace std;
#include<string>

class emp {
    private:
    int salary;

    public:
    void setsalary(int s) {
        salary = s;
    }

    int getsalary() {
        return salary;
    }
};

int main() {
    emp e;
    e.setsalary(60);
    cout << e.getsalary() << "\n"; 
    return 0;
}