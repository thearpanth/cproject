#include<string>
#include<iostream>
using namespace std;

int main() {
    string b[5];
    b[0]="apple";
    b[1]="banana";
    b[2]="chesternut";
    b[3]="dragon fruit";
    b[4]="eddo fruit";
    
    for(int i=0; i<5 ; i++){
        cout<<b[i]<<"\n";
    }

    cout<<"the size of string is "<<sizeof(string)<<endl;
    cout<<"the size of the string is \"b\" "<<sizeof(b)<<endl; //i am using singe slash 
    return 0;

    return 0;
}