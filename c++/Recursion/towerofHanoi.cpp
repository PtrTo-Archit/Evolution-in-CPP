#include<iostream>
#include<string>
using namespace std;
int count=0;
int towerofHanoi(int n,string source, string dest, string helper){
   
    if(n==0){
        return 0;
    }
    int count=0;
   count+= towerofHanoi(n-1,source, helper, dest);
    cout<<"Move"<<n<<"th disk from "<<source<<" to "<<dest<<endl;
    count++;
    count+=towerofHanoi(n-1,helper,dest,source);
    return count;

}
int main(){
int n=3;
cout<<towerofHanoi(n,"A","C","B");
return 0;

}