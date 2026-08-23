#include<iostream>
#include<stack>
using namespace std;
void reverse(string &str){
    stack<char> s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        int i=0;
        str[i++]=s.top();
        s.pop();
    }

}
int main(){
    string str="success";
    cout<<str<<endl;
    reverse(str);
    cout<<str<<endl;
    return 0;
}