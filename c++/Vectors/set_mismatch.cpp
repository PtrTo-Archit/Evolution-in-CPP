#include<iostream>
#include<vector>
using namespace std;
vector<int> setMismatch(const int arr[],int n){
    vector<int>idx(n+1,0);
    int duplicate=0;
    int missing=0;
    for(int i=0;i<n;i++){
        idx[arr[i]]++;
    }
    for(int i=1;i<idx.size();i++){
        if(idx[i]>1){
            duplicate=i;
        }
        else if(idx[i]==0){
            missing=i;
        }
    }
    return {missing,duplicate};
}
int main(){
    int arr[]={1,2,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    vector<int>ans=setMismatch(arr,n);
    if(ans[0]!=0 && ans[1]!=0){
        cout<<ans[0]<<","<<ans[1]<<endl;
    }
    else{
        cout<<"all integers present";
    }
    return 0;
}