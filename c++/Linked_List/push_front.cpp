#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class List{
    public:
    Node * head;
    Node * tail;
    List(){
        head= NULL;
        tail= NULL;
    }
    void push_front(int val){
        Node * newNode= new Node(val);
        if(head!=NULL){
            newNode->next=head;
            head=newNode;
        }
        else{
            head=tail=newNode;
        }
    }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    return 0;
}