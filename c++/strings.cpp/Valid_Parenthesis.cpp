#include<iostream>
#include<string>
using namespace std;
bool isValid(string s) {
    int n = s.length();
    char stack[n]; // Fixed array
    int top = -1;  // Pointer to the top of the stack

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c; // Push
        } else {
            if (top == -1) return false;
            char last = stack[top--]; // Pop
            if ((c == ')' && last != '(') || 
                (c == '}' && last != '{') || 
                (c == ']' && last != '[')) return false;
        }
    }
    return top == -1;
}
int main(){
    string s="[({)}]";
    bool val=isValid(s);
    if(val){
        cout<<"Valid Parenthesis";
    }
    else{
        cout<<"Invalid Parenthesis";
    }
    return 0;
}
