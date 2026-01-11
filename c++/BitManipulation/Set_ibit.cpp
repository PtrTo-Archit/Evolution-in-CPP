#include<iostream>
using namespace std;
int SetIthbit(int num, int i){
    int mask = (1<<i);
    num=mask | num;
    return num;
}
int main(){
    int num,i;
    cin>>num>>i;

    cout<<SetIthbit(num,i);
    return 0;
}