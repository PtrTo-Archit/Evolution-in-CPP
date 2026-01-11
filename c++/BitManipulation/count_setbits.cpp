#include<iostream>
using namespace std;
int countSetbit(int num){
    int count=0;
    while (num>0){
        int lastbit=num &1;
        if(lastbit){
            count++;
        }
        num=num>>1;
    }
    return count;
}
int main(){
    int num;
    cin>>num;
    cout<<countSetbit(num);
    return 0;
}