#include<iostream>
using namespace std;
//i am using pass and continue 
int main() {
    for(int i=1; i<10; i++) {
        if(i==6){
            cout<<"its ends now"<<"\n";
            break;
        }
        else if(i==3){
            cout<<"i pass at 3"<<"\n";
            continue;
        }
        else if(i!=3) {
            cout<<"else the num is not 3 it is "<<i<<" hi"<<"\n";

        }
    }
}