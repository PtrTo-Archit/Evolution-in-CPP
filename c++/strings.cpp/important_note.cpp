#include<iostream>
using namespace std;
int main(){
    char work[]="code";
    cout<<work<<endl;
    work[0]='m';
    cout<<work<<endl;
    //here in case of pointer it is only a read only memory we cannot modify it to mode
    const char *str="code";
    cout<<str;

}
// cin ignores whitespaces 
