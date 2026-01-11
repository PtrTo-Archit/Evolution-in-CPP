#include <iostream>
#include<cstring>
using namespace std;
int main(){
    char ch='\n';
    char one='f';
    int pos=one-'a';
    cout<<pos<<endl;
    char str[]={'a','b','c'};
    str[2]='d';
    cout<<str<<endl;  /// in case of integer array it gives memory address//
    int arr[5]={1,2,3,4};
    cout<<arr[3];
    char work[5]="code";
    work[2]='f';
    cout<<work<<endl;
    cout<<work[4]<<endl;
    cout<<sizeof(work)<<endl;
    cout<<strlen(work)<<endl;
    char real[5]={'c','o','d','e','\0'};
    cout<<real<<" ";
    cout<<real[1]<<" ";
    cout<<sizeof(real)<<" ";
    cout<<strlen(real)<<" ";
    char test[50]={'a','b','c','d','e','\0'};
    cout<<test[10];
    // Taking inputs
    char word[30];
    cin>>word;// ignore whitespaces and new line character
     char sentence[50];
     cin.getline(sentence,50,'.');
}