#include<iostream>
using namespace std;
int Ithbit(int num, int i){
    int mask = 1<<i;
    if(!(mask & num)){
        return 0;
    }
    return 1;
}
int main(){
    int num,i;
    cin>>num>>i;

    cout<<Ithbit(num,i);
    return 0;
}