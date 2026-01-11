#include<iostream>
#include<string>
using namespace std;
class Complex {
    int real;
    int img;
public:
    Complex(int r, int i){
        real=r;
        img=i;
    }
    void showNum() {
        cout<<real<<" + "<<img<<"i\n";
    }
    //OPerator Overloading
    Complex operator +(Complex &c1)
    // here we are using Complex return type because we are creating  new object inside function operator
    {
        int resReal= this->real + c1.real;
        int resImg= this->img + c1.img;
        Complex c3(resReal,resImg);
        return c3;
        // Returning the value is better to main because
        // Complex c3 = c1 + c2; // ERROR! The function returns nothing to assign.
        //Complex c4 = c1 + c2 + c3; // ERROR! Can't chain operations.
    }

};

int main(){
Complex c1(1,2);
Complex c2(3,4);
c1.showNum();
c2.showNum();

Complex c3=c2 + c1;
c3.showNum();
    return 0;
}