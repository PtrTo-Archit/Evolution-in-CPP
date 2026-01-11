#include<iostream>
using namespace std;

void count(int n){
    int first=1;
    for(int i=1;i<=n;i++){
        cout<<first<<" ";
        first=first+1;
        }
        return;
}
int main() {
    int n;
    cin>>n;
    count(n);

}