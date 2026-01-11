#include<iostream>
using namespace std;
void binToDec(int n){
    int decNum=0;
    int pow=1;
    while(n>0){
        int ld=n%10;
        decNum+= ld*pow;
        pow*=2;
        n=n/10;
    }
    cout<<"Decimal number is: "<<decNum<<endl;
}
int main() {
    int n;
    cin>>n;
    binToDec(n);  
}
