#include<iostream>
using namespace std;
int main(){
    int *ptr=NULL;
    int a=10;
    cout<<ptr<<endl;
    ptr=&a;
    cout<<ptr<<": "<<*ptr<<endl;
    return 0;
}
