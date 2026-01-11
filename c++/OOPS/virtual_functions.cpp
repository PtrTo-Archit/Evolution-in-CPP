#include<iostream>
#include<string>
using namespace std;
class Parent {
    public:
    void show(){
        cout<<"Parent class show.."<<endl;
    }
    virtual void hello(){
        cout<<"Parent hello"<<endl;
    }
};
class Child: public Parent{
    public:
    void show(){
        cout<<"Child class show.."<<endl;
}
void hello(){
    cout<<"Child hello";
}
};
int main(){
Child child1;
Parent *ptr;
ptr=&child1;
ptr->hello();
    return 0;
}