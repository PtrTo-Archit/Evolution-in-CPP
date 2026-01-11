#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0;
    int b=1;
    if(n==1){
        return a;
    }
    else if(n==2){
        return b;
    }
    int Next=0;
    for(int i=2;i<n;i++){
        Next=a+b;
        a=b;
        b=Next;
    }
    return Next;
}

int main(){
    int n;
    cin>>n;
    cout<<n<<"th fibo no. is: "<<fibonacci(n);
    return 0;
}