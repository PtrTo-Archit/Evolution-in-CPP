#include<iostream>
using namespace std;
int main(){
    int C=(char)('B'+1);
    char ch=('A'+1);
    cout<<ch<<endl;
    cout<<ch+1<<endl;
    cout<<'A'-0<<endl;
    cout<<(int)'A'<<endl;
    cout<<(float)(10/3)<<endl;// No change on applying float on whole expression
    cout<<((float)10/3)<<endl;
    cout<<C<<endl;
    cout<<(ch>C)<<endl;
    cout<<(ch<C)<<endl;
    cout<<(ch<=C)<<endl;
    int largest=C>=ch ? C:ch;//Ternary operator
    cout<<largest;
    return 0;
}