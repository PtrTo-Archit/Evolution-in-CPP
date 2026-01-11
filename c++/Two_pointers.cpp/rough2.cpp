#include<iostream>
#include<algorithm>
using namespace std;
bool check(int nums[],int n){
    for(int i=0;i<n-1;i++){
        if(nums[i+1]==nums[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int nums[]={1,2,3,4,5};
    int n=sizeof(nums)/sizeof(int);
    sort(nums,nums+n);
    cout<<boolalpha<<check(nums,n);
    return 0;
}