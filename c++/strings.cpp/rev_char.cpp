#include<iostream>
#include<cstring>
using namespace std;
void toRev(char str[],int n){
    int i=0;
    int j=n-1; 
    while(i<j){
        swap(str[i++],str[j--]);
            }
            cout<<str;

    }
int main() {
char str[]="Code";
toRev(str,strlen(str));
return 0;
}