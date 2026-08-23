#include<iostream>
#include<list>
using namespace std;
class Stack{
   list<int>ll;
   public:
   void push(int val){
      ll.push_front(val);
   }
   void pop(){
      if(isEmpty()){
         cout<<"Stack is empty";
         return;
      }
      ll.pop_front();
   }
   int top(){
      if(isEmpty()){
         cout<<"Stack is Empty";
         return -1;
      }
      return ll.front();
   }
   bool isEmpty(){
      // return ll.empty();
      return ll.size()==0;
   }
};
int main(){
   Stack s;
   s.pop();
   return 0;
}