#include<iostream>
#include<string>
using namespace std;
class Parent {
    public:
    void show(){
        cout<<"Parent class show.."<<endl;
    }
};
class Child: public Parent{
    public:
    void show(){
        cout<<"Child class show.."<<endl;
}
};
int main(){
Parent C1;
C1.show();
    return 0;
}