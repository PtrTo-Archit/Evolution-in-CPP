#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;
int baseball(vector<string> &operation,stack<int>&s){
    for(int i=0;i<operation.size();i++){
        if(operation[i]=="+"){
            int t1=s.top();
            s.pop();
            int t2=s.top();
            s.pop();
            s.push(t2);
            s.push(t1);
            s.push(t1+t2);
        }
        else if(operation[i]=="C"){
            s.pop();
        }
        else if(operation[i]=="D"){
            s.push(2*s.top());
        }
        else{
            s.push(stoi(operation[i]));
        }

    }
    int sum=0;
    while(!s.empty()){
        sum+=s.top();
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return sum;
}
int main(){
    vector<string>operation={"5","2","C","D","+"};
    stack<int>s;
    cout<<baseball(operation,s);
    return 0;

}