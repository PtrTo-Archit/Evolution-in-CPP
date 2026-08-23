#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
   Node(int val){
      data=val;
      next=NULL;
   }
};

class Stack{
   Node* head;
   public:
   Stack(){
      head=NULL;
   }
   void push(int val){
      Node* newNode= new Node(val);
      if(head==NULL){
         head=newNode;
      }
      else{
         newNode->next=head;
         head=newNode;
      }
   }
   void pop(){
      if(head==NULL){
         cout<<"Stack is empty";
         return;
      }
      Node*temp=head;
      head=temp->next;
      temp->next=NULL;
      delete temp;
   }
   int top(){
      if(head==NULL){
         cout<<"Stack is Empty";
         return -1;
      }
      return head->data;
   }
};
int main(){
   Stack s;
   s.pop();
   return 0;
}