// #include<iostream>
// #include<string>
// using namespace std;
// class Student {
//     private:
//     string name;
//     float cgpa;
//     public:
//     void getPercentage() {
//         cout<<(cgpa*10)<<endl;
//     }
//     //setters
//     void setName(string NameVal){
//         name=NameVal;
//     }
//     void setCgpa(float CgpaVal){
//         cgpa=CgpaVal;
//     }
//     //getters
//     string getName(){
//         return name;
//     }
//     float getCgpa(){
//         return cgpa;
//     }
   

// };
// int main() {
//     Student s1;
//     s1.setName("Archit");
//     s1.setCgpa(9.1);
//     cout<<s1.getName()<<endl;
//     cout<<s1.getCgpa()<<endl;
//     return 0;

    
// }
// #include<iostream>
// #include<string>
// using namespace std;
// class User{
//     string id;
//     string password;
//     public:
//     string username;
//     User(string id){
//         cout<<"parameterised constructor called"<<endl;
//         this->id = id;
//     }
//     string getId(){
//         return id;
//     }
//     void setPassword(string password){
//         this->password = password;
//     }
//     string getPassword(){
//         return password;
//     }
// };
// int main() {
//     User u1("1234");
//     cout<<u1.getId()<<endl;
//     u1.username="Archit";
//     cout<<u1.username<<endl;
//     u1.setPassword("BoomBoom");
//     cout<<u1.getPassword()<<endl;
//     return 0;


// }
// #include<iostream>
// #include<string>
// using namespace std;
// class Animal{
//     public:
//     string color;
//     void eat(){
//         cout<<"eats"<<endl;
//     }
//     };
//     class Fish: private Animal {
//         public:
//         int fins;
//         void swim(){
//             eat();
//             cout<<"swims"<<endl;
//         }

//     };


// int main(){
//     Fish f1;
//     f1.fins=3;
//     f1.swim();
//     cout<<f1.fins<<endl;


// }
// #include<iostream>
// using namespace std;
// class Example{
//     public:
//     static int x;
// };
// int Example::x=0;
// int main() {
//     Example eg1;
//     Example eg2;
//     Example eg3;
//     cout<<eg1.x++<<endl;
//     cout<<eg2.x++<<endl;
//     cout<<eg3.x++<<endl;


// }
// #include<iostream>
// using namespace std;
// class Car{
//     public:
//     string name;
//     string color;
//     int *mileage;
//     Car(string name , string color){
//         this->name=name;
//         this->color=color;
//         mileage = new int;
//         *mileage=12;
//     }
//     Car(Car &original) {
//         cout<<"copying original to new..\n";
//         name=original.name;
//         color=original.color;
//         mileage=new int;
//         *mileage=*original.mileage;
//     }
// };

// int  main() {
// Car c1("Maruti 800", "White");
// Car c2(c1);// custom copy
// cout<<&c2.name<<endl;
// cout<<&c1.name<<endl;
// cout<<c2.color<<endl;
// cout<<*c2.mileage<<endl;
// *c2.mileage=10;
// cout<<*c1.mileage<<endl;
// }
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
  
    Node(int data){
        this->data = data;
        next=NULL;
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
    void push_back(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insert(int val, int pos){
        Node* newNode= new Node(val);
        Node * prev= head;
        Node*count=head;
        int n=0;
        while(count!=NULL){
            count=count->next;
            n++;
        }
        if(pos<0 || pos>n){
            return;
        }
        if(pos==0){
            newNode->next=head;
            head=newNode;
            if(tail==NULL) tail=newNode;
            return;
        }
        if(pos==n){
            tail->next=newNode;
            tail=newNode;
            return;
        }
        for(int i=0;i<pos-1;i++){
            prev=prev->next;
        }
        newNode->next=prev->next;
        prev->next=newNode;
    }
    bool search(int key){
        Node* temp = head;
        while(temp!=NULL){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
    int helper(Node* temp, int key){
        if(temp==NULL){
            return -1;
        }
        if(temp->data==key){
            return 0;
        }
        int idx=helper(temp->next,key);
        if(idx==-1){
            return -1;
        }
        return idx+1;
    }
    int recursive(int key){
        Node* temp=head;
        return helper(temp,key);
    }
    Node* helper(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        while(curr!=NULL){
            Node* save= curr->next;
            curr->next=prev;
            prev=curr;
            curr=save;
        }
        head=prev;
        return head;
    }
    void reverse(){
    head = helper(head);
}
    void remove(int n){
        Node* slow= head;
        Node* fast=head;
        while(n--){
            fast=fast->next;
        }
        Node* prev=NULL;
        while(fast!=NULL){
            prev=slow;
            fast=fast->next;
            slow=slow->next;
        }
        prev->next=slow->next;
        slow->next=NULL;
        delete slow;
    }
};
int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.print();
    // ll.insert(8,2);
    // cout<<ll.search(4);
    // cout<<ll.recursive(3);
    // ll.reverse();
    // ll.print();
    ll.remove(2);
    ll.print();






    
}