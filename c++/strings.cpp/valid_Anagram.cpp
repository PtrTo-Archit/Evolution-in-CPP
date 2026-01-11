#include<iostream>
#include<cstring>
using namespace std;
bool isAnagram(string word1,string word2){
    if(word1.length()!=word2.length()){
        cout<<"Not a valid anagram"<<endl;
        return false;
    }
    int count[26]={0};
    for(int i=0;i<word1.length();i++){
    int idx=word1[i] - 'a';
    count[idx]++;
}
    for(int i=0;i<word2.length();i++){
        int idx=word2[i] -'a';
        if(count[idx]==0){
            cout<<"Not a valid anagram"<<endl;
            return false;
        }
        count[idx]--;
    }
    cout<<"Valid anagram";
    return true;

}
int main() {
    string word1="nagarat";
    string word2="nagaram";
    isAnagram(word1,word2);
    return 0;


}