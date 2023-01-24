#include<iostream>
using namespace std;

int main() {

//palindrome number using for loop
 int a=0;
 int b=1;
 int c=0;
 int i=1;
 while(i<10) {
    c=a+b;
    cout << c << "\n";
    a=b;
    b=c;
    i++;
 }

}