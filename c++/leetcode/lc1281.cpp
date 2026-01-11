#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int prod=1;
    int sum=0;
    while(n!=0){
        int ld=n%10;
        sum=sum+ld;
        prod=prod*ld;
        n=n/10;
        
    }
    int ans=prod-sum;
    cout<<ans;

}