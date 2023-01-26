#include<iostream>
using namespace std;
#include<string>

int main() {
    string food="pizza";
    string &meme=food;

    cout<<food<<"\n";
    cout<<meme;
    return 0;
}