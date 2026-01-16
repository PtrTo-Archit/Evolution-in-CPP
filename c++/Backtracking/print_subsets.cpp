#include<iostream>
#include<string>
using namespace std;
void Printsubset(string str, string subset){
    int n=str.size();
    if(n==0){
        cout<<subset<<endl;
        return;
    }
    
    char ch= str[0];
    Printsubset(str.substr(1,n-1), subset + ch);
    Printsubset(str.substr(1,n-1), subset);

}
int main() {
    string str="abc";
    string subset="";
    Printsubset(str, subset);
    return 0;
}