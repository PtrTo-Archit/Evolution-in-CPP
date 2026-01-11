#include<iostream>
using namespace std;
void oddoreven(int num){
    if(!(num & 1)){
        cout<<" Even "<<endl;
    }
    else{
        cout<<"Odd "<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    oddoreven(num);
    return 0;
}