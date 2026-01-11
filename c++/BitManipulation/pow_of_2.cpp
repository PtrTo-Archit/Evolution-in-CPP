#include<iostream>
using namespace std;
int powof2(int num){
    if(!(num & (num-1))){
        return 1;
    }
    else {
        return 0;
    }
}
int main(){
    int num;
    cin>>num;

    cout<<powof2(num);
    return 0;
}