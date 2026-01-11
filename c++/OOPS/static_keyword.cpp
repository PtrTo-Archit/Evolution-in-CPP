#include<iostream>
#include<string>
using namespace std;

class Example {
    public:
    static int x;
};
int Example::x=0;
int main(){
    Example eg1;
    Example eg2;
    Example eg3;
    cout<<eg1.x++<<endl;//0
    cout<<eg2.x++<<endl;//1
    cout<<eg3.x++<<endl;//2
    cout<<Example::x;
}