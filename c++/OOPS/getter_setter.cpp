#include<iostream>
#include<string>
using namespace std;
 class Student {
    //Properties
    string name;
    float cgpa;
    public:
    //Methods
    void getPercentage() {
        cout<<(cgpa * 10)<<"% \n";
    }
    //Setters
    void setName(string nameVal){
        name=nameVal;
    }
    void setCgpa(float newCgpa){
        cgpa=newCgpa;
    }
    //getters
    string getName(){
        return name;
    }
    float getCgpa(){
        return cgpa;
    }

 };

 int main() {
    Student s1; //object
    s1.setName("Archit");
    s1.setCgpa(9.1);
    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;
    return 0;
 }