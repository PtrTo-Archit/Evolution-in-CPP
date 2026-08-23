#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<< " ";
        s.pop();
    }
    cout<<endl;
}
void pushAtbottom(stack<int>&s,int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int top_val=s.top();
    s.pop();
    pushAtbottom(s,val);
    s.push(top_val);
}
int main(){
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    print(s);
    pushAtbottom(s,5);
    print(s);
}