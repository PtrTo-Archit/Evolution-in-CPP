#include<iostream>
using namespace std;
class BankAccount{
    int accoutNum;
    int balance;
    public:
    virtual void deposit()=0;
    virtual void withdraw()=0;
    virtual void getBalance()=0;
};
class Customer1: public BankAccount{
    public:
    void deposit(){
        cout<<"Deposited"<<endl;
    }
    void withdraw(){
        cout<<"Withdrawn"<<endl;
    }
    void getBalance(){
        cout<<"checked BAlance";
    }

};
int main(){
    BankAccount * ptr[1];
    ptr[0]=new Customer1;
    for(int i=0;i<1;i++){
        ptr[i]->deposit();
        ptr[i]->withdraw();
        ptr[i]->getBalance();
    }
    return 0;

}