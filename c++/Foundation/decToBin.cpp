#include<iostream>
using namespace std;
void decToBin(int n){
    int binNum=0;
    int pow=1;
    while(n>0){
        int rem=n%2;
        binNum+= rem*pow;
        pow*=10;
        n=n/2;
    }
    cout<<"binary number is: "<<binNum<<endl;
}
int main() {
    int n;
    cin>>n;
    decToBin(n);  
}