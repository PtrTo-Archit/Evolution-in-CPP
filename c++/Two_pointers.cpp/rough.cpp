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
#include<iostream>
using namespace std;
class Example{
    public:
    static int x;
};
int Example::x=0;
int main() {
    Example eg1;
    Example eg2;
    Example eg3;
    cout<<eg1.x++<<endl;
    cout<<eg2.x++<<endl;
    cout<<eg3.x++<<endl;


}
