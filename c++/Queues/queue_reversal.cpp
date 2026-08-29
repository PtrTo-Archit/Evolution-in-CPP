#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void q_reverse(queue<int> & q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

}
int main(){
    queue<int>q;
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     q.push(5);

     q_reverse(q);
     while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
     }
     return 0;
}