#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        //Print triangle 1
        int first=1;
        while(first<=n-i+1){
            cout<<first;
            first=first+1;
        }
        int star=2;
        while(star<=i) {
            cout<<"*";
            star=star+1;
        }
        int start=i-1;
        while(start){
            cout<<"*";
            start=start-1;
        }
        int j=n-i+1;
        while(j) {
            cout<<j;
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
}