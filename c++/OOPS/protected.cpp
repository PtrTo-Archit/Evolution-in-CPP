#include<iostream>
using namespace std;
class Animal{
    protected:
    string color;
    void eat(){
        cout<<"eats\n";

    }
    void breathe(){
        cout<<"breathes\n";
    }


};
class Fish: protected Animal{
    public:
    int fins;
    
    void swim(){
        eat();
        cout<<"swims\n";
    }
};
int main(){
Fish f1;
f1.fins=2;
f1.swim();
return 0;
}