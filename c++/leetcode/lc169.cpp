#include<iostream>
#include<vector>
using namespace std;
 int majority(vector<int> num){
    int freq=0, ans=0; 
    for(int i=0;i<num.size();i++){
    if(freq==0){
        ans=num[i];
    }
    if(ans==num[i]){
        freq++;

    }else{
        freq--;
    }
}
int count=0;
for(int val: num){
    if(val==ans){
        count ++;
    }
}
if(count>num.size()/2){
    return ans;
}
else{
    return -1;
}
return ans;
}
int main(){
vector<int>num={1,2,2,1,3,3,6,6,6,6,6,6,6};
int major=majority(num);
cout<<major;
}