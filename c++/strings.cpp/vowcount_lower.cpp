#include<iostream>
#include<cstring>
using namespace std;
void vowCount(string str){
    int count=0;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            count++;
        }
    }
    cout<<count;
}
int main(){
 string str="hello";
 vowCount(str);
}