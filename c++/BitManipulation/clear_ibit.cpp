#include<iostream>
using namespace std;
int clearIthbit(int num, int i){
    int mask = ~(1<<i);
    num=num & mask;
    return num;
}
int main(){
    int num,i;
    cin>>num>>i;

    cout<<clearIthbit(num,i);
    return 0;
}