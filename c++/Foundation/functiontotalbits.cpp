#include<iostream>
using namespace std;

int Bits(int n){
    int count=0;
    while(n!=0){
        if(n&1){
        count++;
    }
    n=n>>1;
}
return count;
}

int main(){
    int a,b;
    cin>>a>>b;
    int Total=Bits(a)+Bits(b);
    cout<<"total bits are: "<<Total;
    return 0;
}