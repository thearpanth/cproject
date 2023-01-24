#include<iostream>
using namespace std;

int main() {

//palindrome number using for loop
 int a=0;
 int b=1;
 int c=0;
 for(int i=1;i<10;i++) {
    c=a+b;
    cout << c << "\n";
    a=b;
    b=c;
    
 }

}