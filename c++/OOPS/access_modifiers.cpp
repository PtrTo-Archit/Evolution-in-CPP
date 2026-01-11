#include<iostream>
using namespace std;
class User {
    int id;
    string username;
    string password;
    public:
    string bio;

    void deactivate() {
        cout<<"deleting account\n";
    }
    void editBio(string newBio){
        bio=newBio;// methods have access to above attributes
    }
 };
 int main() {
    User s1; //object
    cout<<sizeof(s1)<<endl;
    s1.bio="Workaholic";
    cout<<s1.bio<<endl;
    s1.editBio("Alcoholic");
    cout<<s1.bio<<endl;
    return 0;
 }