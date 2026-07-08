#include<iostream>
#include<algorithm>
using namespace std;
bool check(string str1, string str2){
    int n=str1.size();
    int m=str2.size();
    if(m!=n){
        return false;
    }
    int freq1[26]={0};
    int freq2[26]={0};
    for(int i=0;i<n;i++){
        freq1[str1[i]-'a']++;
        freq2[str2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
    if(freq1[i]!=0 && freq2[i]!=0) continue;
    if(freq1[i]==0 && freq2[i]==0) continue;
    else{
    return false;
    }
    }
    sort(freq1,freq1+26);
    sort(freq2, freq2 + 26);
    return equal(begin(freq1),end(freq1),begin(freq2),end(freq2));
}
int main(){
    string str1="acccbb";
    string str2="aabbbc";
    cout<<boolalpha<<check(str1,str2);
    return 0;
}