#include<iostream>
using namespace std;
int tp(int n){
    //here for n=0 there will be 1 ways because even not putting a single tile is also a 1 way
    if(n==0 || n==1){
        return 1;
    }
    // // Vertical tiling
    // int ans1 = tp(n-1);
    // // Horizontal tiling
    // int ans2= tp(n-2);
    return tp(n-1) + tp(n-2);

    // return ans1+ans2;
}
int main() {
    int n;
    cin>>n;
    cout<<tp(n);
    return 0;

}