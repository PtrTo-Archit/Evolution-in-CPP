#include<iostream>
using namespace std;

bool isPalindrome(char ch[], int n){
    int start=0;
    int end=n-1;
    for(int i=0;i<n/2;i++){
        if(ch[start]!=ch[end]){
            return 0;
        }
        else if(ch[start]==ch[end]){
            start++;
            end--;
        }

    }
    return 1;
}
int main(){
    int size;
    cin>>size;
    char ch[100];
    for(int i=0;i<size;i++){
        cin>>ch[i];
    }
    if(isPalindrome(ch,size)){
        cout<<"Word is Palindrome"<<endl;
    }
    else{
        cout<<"Word is not a Palindrome"<<endl;
    }
    return 0;

}