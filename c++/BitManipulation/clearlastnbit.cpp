#include<iostream>
using namespace std;
int clearlastnbit(int num, int i){
    num = num& (~0<<i);
    return num;
}
int main(){
    int num,i;
    cin>>num>>i;
    cout<<clearlastnbit(num,i);
    return 0;
}