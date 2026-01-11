#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(char word[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(word[i++]==word[j--]){
            return true;
        }
    }
    return false;

}
int main(){
    char word[]="racecar";
    if(isPalindrome(word,strlen(word))){
        cout<<"Valid Palindrome";
    }
    else{
        cout<<"Invalid Palindrome";
    }
    return 0;

}