#include<iostream>
using namespace std;
int main() {
    int n=1330;
    int num=100;
    
    switch(num){
        case 100:cout<<"Number of 100 rupee notes are:"<<n/100<<endl;
        case 50: cout<<"Number of 50 rupee notes are:"<<(n%100)/50<<endl;
        case 20:cout<<"Number of 20 rupee notes are:"<<(n%100)/20<<endl;
        case 1:cout<<"Number of 1 rupee notes are:"<<((n%100)%20)/1<<endl;

    }
}