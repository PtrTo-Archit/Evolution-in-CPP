#include<iostream>
using namespace std;
bool check(int nums[],int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int nums[]={1,2,3,4,5};
    int n=sizeof(nums)/sizeof(int);
    cout<<check(nums,n);
}