#include<iostream>
using namespace std;
#include<string>

int main() {
    string food="arpan";
    string &meme=food;
    string *ptr = &food;

    cout<<food<<"\n";
    cout<<meme<<"\n";
    cout<<ptr<<"\n";

    cout<<*ptr<<"\n"; //deferancing 
    
return 0;
}