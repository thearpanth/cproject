//Create a class called "Fraction" with properties such as numerator and denominator. Create a method in the "Fraction" class that adds two fractions together.

#include<iostream>
using namespace std;

class fra{
    
    public:
    int n0,d0,n1,d1,n2,d2;
    fra(int a,int b,int c, int d){
        n1=a , d1 = b , n2 = c , d2 = d;
    }

     void cal(){
        n0 = (d1*n2)+(d2*n1);
        d0 = d1*d2;
        int i;
        int a = 0;
        for(i=2;i<=10;i++){
            while(a<1){     
                if(d0%i==0 && n0%i==0){
                    d0=d0/i;
                    n0=n0/i;
                }
                else{
                  a++;
                }
            }
        }
     }
};

int main(){
    fra ca(1,2,1,2);
    ca.cal();
    cout << ca.n0 << "/" << ca.d0 << endl;    
}