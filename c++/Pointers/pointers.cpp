#include<iostream>
using namespace std;
int main(){
    int *pr;
    int a=10;
    int *ptr=&a;
    int **pptr=&ptr;
    
    cout<<ptr<<"="<< &a<<endl;
    cout<<*(&a)<<"="<<*ptr<<endl;
    cout<<pptr<<"="<<&ptr<<endl;
    cout<<*pptr<<"="<<*(&ptr)<<endl;
    *ptr=20;
    cout<<*pr<<endl; //fetches the value from an undefined address
    cout<<a<<endl;
    return 0;

}

// #include<iostream>
// using namespace std;
// int main(){
//     int *ptr=NULL;
    
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;//protected invalid memory forbidden from accesing the value(Crash occurs)
//     cout<<"bye";// will never print
//     return 0;

// }