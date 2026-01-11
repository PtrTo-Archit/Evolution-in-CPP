#include<iostream>
using namespace std;
int updateIthbit(int num, int i,int value){
    num = num& ~(1<<i);
    num=num | (value<<i);
    return num;
}
int main(){
    int num,i,value;
    cin>>num>>i>>value;
    cout<<updateIthbit(num,i,value);
    return 0;
}