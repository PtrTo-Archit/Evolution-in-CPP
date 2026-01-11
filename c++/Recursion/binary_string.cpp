#include<iostream>
#include<string>
using namespace std;
void binarystr(int n,int lp, string ans){
    if(n==0){
        cout<<ans<<endl;
        return;

    }
    if(lp!=1){
        binarystr(n-1,0,ans+'0');
        binarystr(n-1,1,ans+'1');
    }
    else{
        binarystr(n-1,0,ans+'0');
    }
}
int main(){
string ans="";
binarystr(3,0,ans);
return 0;
}