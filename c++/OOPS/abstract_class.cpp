#include<iostream>
#include<string>
using namespace std;
// Abstract class
class Shape{
    public:
    virtual void draw()=0;  // -> Pure virtual function
};
class Circle: public Shape {
    public:
    void draw() {
       cout<<"draw circle\n"; 
    }

};
class Square: public Shape {
    public:
    void draw() {
       cout<<"draw square\n"; 
    }

};
int main() {
    Circle cir1;
    cir1.draw();
    Square squ1;
    squ1.draw();
    return 0;
}

//Why abstract class is important..

// #include<iostream>
// #include<string>
// using namespace std;
// // Abstract class
// class Shape{
//     public:
//     virtual void draw()=0;  // -> Pure virtual function
// };
// class Circle: public Shape {
//     public:
//     void draw() {
//        cout<<"draw circle\n"; 
//     }

// };
// class Square: public Shape {
//     public:
//     void draw() {
//        cout<<"draw square\n"; 
//     }

// };
// int main() {
// Shape* classroom[2]; // A single list that holds ANY shape
// classroom[0] = new Circle();
// classroom[1] = new Square();

// for(int i = 0; i < 2; i++) {
//     classroom[i]->draw(); // This works for ALL of them!
// }
// return 0;
// }