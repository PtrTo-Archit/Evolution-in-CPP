#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void pushAtbottom(stack<int>& s, int val){
        if(s.empty()){
        s.push(val);
        return;
    }
    int top_val=s.top();
    s.pop();
    pushAtbottom(s,val);
    s.push(top_val);
}
void reverse_stack(stack<int>& s){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    reverse_stack(s);
    pushAtbottom(s,temp);
}
int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    print(s);
    reverse_stack(s);
    print(s);

    return 0;
}