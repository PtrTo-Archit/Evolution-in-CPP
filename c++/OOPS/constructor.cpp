#include<iostream>
#include<string>
using namespace std;
 class Car {
    //Properties
    string name;
    string color;
    
    public:
    Car(){
        cout<<"constructor without parameter\n";
    }
    Car(string name, string color){
        cout<<"constructor with parameter\n";
        this->name=name;
        this->color=color;

    }
  
    //getters
    string getName(){
        return name;
    }
    string getColor(){
        return color;
    }

 };

 int main() {
    Car c0;
    Car c1("Maruti 800","White" ); //object
    cout<<"car name: "<<c1.getName()<<endl;
    cout<<"car color: "<<c1.getColor()<<endl;
    Car c2("Fortuner","White" );
    cout<<"car name: "<<c2.getName()<<endl;
    cout<<"car color: "<<c2.getColor()<<endl;

    return 0;
 }