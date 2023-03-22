//Create a class called "BankAccount" with properties such as balance and account number. Create methods in the "BankAccount" class to deposit and withdraw money.

#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    public:
    int balance;
    string id;
    BankAccount(string a,int b){
        balance = b;
        id = a;
    }

    int deposit(int dep){
        balance += dep;
        return balance;
    }

    int withdraw(int with){
        if(balance>=with){
            balance-=with;
        }
        else{
            cout << "not sufficaint amount of money" << endl;
        }
        return balance;
    }
    

};

int main(){

    BankAccount account1("A1",1000);
    char opt;
    int dep, with;
    cout << "enter what you wan do" ;
    cin >> opt;

    if(opt=='a'){
        cout << "the balance account is " << account1.balance << endl; 
    } 
    else if(opt=='b'){
        cout << "enter the amount to enter " ;
        cin >> dep;
        account1.deposit(dep);
    }
    else if(opt=='c'){
        cout << "enter the withdrawn ammount" ;
        cin >> with;
        account1.withdraw(with);
    }
    else{
        cout << "invaid";
    }

}