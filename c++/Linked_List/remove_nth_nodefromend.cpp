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

    void print(){
        Node * temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
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
            if(head->next==NULL){
                delete head;
                head=tail=NULL;
                return;
            }
            //for multiple nodes
            Node* temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
        }
        int getsize(){
            int sz=0;
            Node* temp=head;
            while(temp!=NULL){
                sz++;
                temp=temp->next;
            }
            return sz;
        }
    void remove(int n){
        int size=getsize();
        Node* toDel;
        // EDGE CASE WHEN toDel is head node
        if(n == size){
        toDel = head;
        head = head->next;
        toDel->next = NULL;
        delete toDel;
        return;
        }
        Node* temp= head;
        for(int i=0;i<size-n-1;i++){
            temp=temp->next;
        }
        toDel=temp->next;
        temp->next=temp->next->next;
        toDel->next=NULL;
        delete toDel;
    }
    // M-2 using slow and fast pointers
    void remove_nth_node(int n){
        Node * slow=head;
        Node *fast= head;
        Node* prev=NULL;
        while(n--){
            //when n>size
            if(fast==NULL){
                cout<<"Invalid n"<<endl;
                return;
            }
            fast=fast->next;
        }
        // Edge case for n=5 i.e head node
        if(fast==NULL){
            Node * toDel=head;
            head=head->next;
            toDel->next=NULL;
            delete toDel;
            // For single node
            if(head==NULL){
                tail==NULL;
            }
            return;
        }
        while(fast!=NULL){
            prev=slow;

            slow=slow->next;
            fast=fast->next;
        }
        //Update Tail
        if(slow==tail){
            tail=prev;
        }
        prev->next=slow->next;
        slow->next=NULL;
        delete slow;
        
    } 
};

int main(){
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print();
    ll.remove(5);
    ll.print();
    ll.remove_nth_node(3);
    ll.print();

    
    return 0;
}