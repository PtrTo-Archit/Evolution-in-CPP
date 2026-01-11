#include<iostream>
#include<string>
using namespace std;
int Validsubstring(string s){
    int n=s.size();
    if(n==1){
        return 1;
    }
    if(n<=0){
        return 0;
    }
    int count=0;
    if(s[0]==s[n-1]){
        count++;
    }
    count+= Validsubstring(s.substr(0,n-1)) + Validsubstring(s.substr(1)) - Validsubstring(s.substr(1,n-2));
    return count;
}
int main(){
    string s="abcab";
    
    cout<<Validsubstring(s.substr(0,5))<<endl;
    return 0;
}