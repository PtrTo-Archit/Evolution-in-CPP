#include<iostream>
#include<string>
using namespace std;
 class User {
    //Properties
    int id;
    string password;
    public:
    User(int id){
        this->id=id;
    }
    string username;

    //Setters
    void setPass(string password){
        this->password=password;;
    }
    //getters
    string getPass(){
        return password;
    }
    int getId(){
        return id;
    }

 };

 int main() {
    User s1(20220362); //object
    s1.username="arch_12";
    s1.setPass("Archit@2004");
    cout<<"username is : "<<s1.username<<endl;
    cout<<"Password is: "<<s1.getPass()<<endl;
    cout<<"User id is : "<<s1.getId()<<endl;
    return 0;
 }