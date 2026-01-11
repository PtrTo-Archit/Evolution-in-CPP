#include<iostream>
using namespace std;
// increasing order
void Iprint(int n){
    if(n==0){
        return;
    }
    Iprint (n-1);
    cout<<n<<" ";
}
// decreasing order
void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    print (n-1);
}

int main() {
    int n;
    cin>>n;
    print(n);
    return 0;

}