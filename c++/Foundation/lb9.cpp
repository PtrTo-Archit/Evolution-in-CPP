//Decimal to Binary

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    int place=1;
    while(n != 0){
        int bit = n & 1;
        ans = bit * place + ans;
        place *= 10;
        n >>= 1;

        i++;
    }
    cout<<ans;
}