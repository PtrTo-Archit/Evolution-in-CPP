#include<iostream>
#include<stack>
using namespace std;
bool isMatch(char top, char ch){
    return (top=='('&& ch==')' || top=='['&& ch==']' || top=='{'&& ch=='}');

}
bool valid_parenthesis(string str){
    stack<char>s;
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        if(ch=='('|| ch=='['|| ch=='{'){
            s.push(ch);
        }
        else{
            // for extra closing bracket
            if(s.empty()){
                return false;
            }

            if(!isMatch(s.top(),ch)){
                return false;
            }
            s.pop();
        }
    }
    return s.empty(); // for extra opening bracket
}

int main(){
    string str1="([}])";
    string str2="([{}])";
    cout<<valid_parenthesis(str2);
    return 0;
}