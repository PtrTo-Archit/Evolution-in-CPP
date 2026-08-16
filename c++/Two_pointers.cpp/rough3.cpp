#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next=NULL;
    }
    ~Node(){
        if(next!=NULL){
            delete next;
            next=NULL;
        }
    }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head=NULL;
        tail=NULL;
    }
    ~List(){
        if(head!=NULL){
            delete head;
            head=NULL;
        }
    }
    void push_front(int val){
        Node * newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
        }
    }
    void push_back(int val){
        Node *newNode=new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
            tail->next=NULL; //redundant as while creating newNode its next is already NULL
        }
    }
    void insert(int val,int pos){
        Node *newNode=new Node(val);
        Node *temp=head;
        for(int i=1;i<pos;i++){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
        cout<<endl;
    }
    bool search(int key){
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
            if(temp->data==key){
                cout<<"Key is Present at idx: "<<count<<endl;
                return true;
            }
            count++;
            temp=temp->next;
        }
        return false;
    }
    int helper(Node* h,int key){
         if(h==NULL){
            return -1;
        }
        if(h->data==key){
            return 0;
        }
        int idx=helper(h->next,key);
        if(idx==-1){
            return -1;
        }
        return idx+1;

    }
    int rec_search(int key){
        return helper(head,key);
    }
    void reverse(){
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL){
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        tail=head;
        head=prev;
    }
    void remove(int n){
        Node* temp=head;
        Node* prev=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(n==count){
            head=prev->next;
            prev->next=NULL;
            delete prev;
            return;
        }
        for(int i=1;i<count-n;i++){
            prev=prev->next;
        }
        if(n==1){
            prev->next=NULL;
            delete tail;
            tail=prev;
            return;

        }
        Node*next=prev->next->next;
        Node* curr=prev->next;
        curr->next=NULL;
        prev->next=next;
        delete curr;
    }
    Node* help(Node* h,int n){
        Node * slow=h;
        Node* fast = h;
        while(n--){
            fast=fast->next;
        }
        if(fast==NULL){
            Node* newHead=slow->next;
            slow->next=NULL;
            delete slow;
            return newHead;
        }
        Node* prev=NULL;
        while(fast!=NULL){
            prev=slow;
            slow=slow->next;
            fast=fast->next;
        }
        prev->next=slow->next;
        if(slow==tail){
            tail=prev;
        }
        slow->next=NULL;
        delete slow;
        return h;

    }
    void removes_f(int n){
    head=help(head,n);
    }
    Node* hlp(Node* h,int k){
        Node* curr=h;
        for(int i=0;i<k;i++){
            if(curr==NULL){
                return h;
            }
            curr=curr->next;
        }
        curr=h;
        Node*prev=NULL;
        int count=0;
        while(count<k){
            Node* save=curr->next;
            curr->next=prev;
            prev=curr;
            curr=save;
            count++;
        }
        h->next=hlp(curr,k);
        return prev;
    }
    void k_group(int k){
        head= hlp(head,k);
    }
    Node* revers(Node*h){
        Node*prev=NULL;
        Node*curr=h;
        while(curr!=NULL){
            Node* save=curr->next;
            curr->next=prev;
            prev=curr;
            curr=save;
        }
        return prev;
    }
    bool check(Node* h){
        Node*curr=h;
        Node*slow=h;
        Node* fast=h;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node*newHead=revers(slow->next);
        Node*first=h;
        Node*second=newHead;
        while(second!=NULL){
            if(first->data!=second->data){
                revers(newHead);
                cout<<"Invalid Palindrome"<<endl;
                return false;
            }
            first=first->next;
            second=second->next;
        }
        revers(newHead);
        cout<<"Valid Palindrome"<<endl;
        return true;
    }
    bool palindrome(){
    return check(head);
    } 
};
int main(){
    List ll;
    ll.push_front(1);
    ll.push_back(2);
    // ll.insert(6,2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(4);
    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);
    ll.print();
    // ll.search(6);
    // cout<<ll.rec_search(1)<<endl;
    // ll.reverse();
    // ll.print();
    // ll.remove(1);
    // cout<<endl;
    // ll.print();
    // ll.removes_f(2);
    // ll.print();
    // ll.k_group(3);
    // cout<<endl;
    // ll.print();
    ll.palindrome();



    return 0;
}