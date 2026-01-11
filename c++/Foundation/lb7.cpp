#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){//-> second increment due to updation part of for loop
        cout<<i;
        i++; // First increment
        cout<<i<<endl;

    }
}