#include<iostream>
using namespace std;
class Animal{
    public:
    string color;
    void eat(){
        cout<<"eats\n";

    }
    void breathe(){
        cout<<"breathes\n";
    }


};
class Fish: public Animal{
    public:
    int fins;
    void swim(){
        cout<<"swims\n";
    }
};
int main(){
Fish f1;
f1.fins=2;
f1.swim();
f1.eat();
f1.breathe();
return 0;
}
// Example to understand protected and private inheritance.....

//  #include<iostream>
// #include<string>
// using namespace std;
// class Animal {
//     public:
//     void eats(){
//         cout<<"Eats"<<endl;
//     }
//       void breathes(){
//         cout<<"Breathes"<<endl;
//     }
// };
// class Mammal: private Animal{
// public:
//     string bloodType;
//     Mammal(){
//         eats();
//         bloodType="worm";
//     }
// };
// class Dog: public Mammal{
// public:
// void Tailwag(){
//     breathes();
//     cout<<"Dog wags its tail"<<endl;
// }
// };
// int main(){
//     Dog d1;
//     d1.Tailwag();
//     // m1.eats();
//     // m1.breathes();
//     return 0;
    

// }

