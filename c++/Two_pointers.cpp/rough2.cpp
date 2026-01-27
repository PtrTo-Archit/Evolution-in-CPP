#include<iostream>
#include<string>
using namespace std;
bool Almostequal(string str1,string str2){
    int count1[26]={0};
    int count2[26]={0};
    int diffcount=0;
    if(str1==str2){
        return true;
    }
    if(str1.length()!=str2.length()){
        return false;
    }
    for(int i=0;i<str1.length();i++){
        count1[str1[i]-'a']++;
        count2[str2[i]-'a']++;
        if(str1[i]!=str2[i]){
            diffcount++;
        }
        if(diffcount>2)return false;
    }
    for(int i=0;i<26;i++){
        if(count1[i]!=count2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string str1="bank";
    string str2="bink";
    cout<<boolalpha<<Almostequal(str1, str2);
    return 0;

}