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
    ~Node(){
        cout<<"node destructor for data = "<<data<<endl;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
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
    void push_back(int val){
        Node *newNode= new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void print(){
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void insert(int val, int pos){
        Node* newNode=new Node(val);
        Node *temp=head;
        for(int i=0;i<pos-1;i++){
            if(temp==NULL){
                cout<<"position is Invalid"<<endl;
                return;
            }
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    ~List(){
        cout<<"destructor of list"<<endl;
        if(head!=NULL){
            delete head;
            head=NULL;
        }
    }
          void pop_front(){
            Node* temp=head;
            if(head==NULL){
                return;
            }
            head=head->next;
            temp->next=NULL;
            // For single node we need below condition
            if(head==NULL){
                tail=NULL;
            }
            delete temp;
            
        }
        void pop_back(){
            if(head==NULL){
                return;
            }
            // For single node
            if(head->next=NULL){
                delete head;
                head=tail=NULL;
                return;
            }
            //for multiple nodes
            Node* temp=head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
        }
};

int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.print();
    ll.pop_front();
    ll.print();
    ll.pop_back();
    ll.print();
    
    return 0;
}