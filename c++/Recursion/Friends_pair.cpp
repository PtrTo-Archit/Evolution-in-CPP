#include<iostream>
#include<string>
using namespace std;
int FriendsPair(int n){
    if(n==1 || n==2){
        return n;
    }
    return FriendsPair(n-1) + (n-1)*FriendsPair(n-2);
 
}
int main() {
cout<<FriendsPair(5);
return 0;
}