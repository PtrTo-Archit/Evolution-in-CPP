#include<iostream>
using namespace std;

int NthTerm(int n){
    int AP=3*n + 7;
    return AP;
}

int main(){
    int n;
    cin>>n;
    cout<<n<<"th term is: "<<NthTerm(n);
    return 0;
}