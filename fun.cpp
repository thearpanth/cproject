#include<iostream>
using namespace std;
int add(int x,int y);

int main() {
 int num1,num2;
 char a;
 cout<< "enter the first num";
 cin >> num1; 
 cout << "enter the second num ";
 cin >> num2;
 cout << "what you want to do ";
 cin >> a;

     if(a=='a'){
         cout << "the ans is ";
         cout << add(num1,num2);
    }
}

int add(int x,int y){
    return x+y;
}
