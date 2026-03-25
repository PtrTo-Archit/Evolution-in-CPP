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
// M-2 
// Time Complexity - O(nlogn)
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> setMismatch(vector<int>nums){
//     sort(nums.begin(),nums.end());
//     int dup=-1;
//     int missing=1;
//     for(int i=0;i<nums.size();i++){
//         if(i>0 && nums[i]==nums[i-1]){
//             dup=nums[i];
//         }
//         else if(nums[i]==missing){
//             missing++;
//         }
//     }
//     return {dup,missing};
// }
// int main(){
//     vector<int>nums={3,2,1,1};

//     vector<int>set=setMismatch(nums);
//     cout<<"["<<set[0]<<","<<set[1]<<"]"<<endl;
//     return 0;
// }
//M-3
//Time Complexity O(n)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>setMismatch(vector<int>nums){
//     int n=nums.size();
//     int duplicate =-1;
//     int missing = -1;
//     for(int i=0;i<n;i++){
//         if(nums[abs(nums[i])-1]<0){
//             duplicate=abs(nums[i]);
//         }
//         else {
//             nums[abs(nums[i])-1]*=(-1);
//         }
//         for(int i=0;i<n;i++){
//             if(nums[i]>0){
//                 missing = i+1;
//                 break;
//             }
//         }
//     }
//     return {duplicate , missing};
// }
// int main(){
//     vector<int>nums={1,3,3,4};
//      vector<int>set=setMismatch(nums);
//     cout<<"["<<set[0]<<","<<set[1]<<"]"<<endl;
//     return 0;
// }