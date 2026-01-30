#include<iostream>
#include<vector>
using namespace std;
vector<pair<int,int>> pairSum(const vector<int>&arr,int target){
    int n=arr.size();
    vector<pair<int,int>>ans;
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            ans.push_back({i,j});
            return ans;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else{
            i++;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={2,7,11,15};
    int target=9;
    vector<pair<int,int>>ans=pairSum(arr,target);
    if(!ans.empty()){
    cout<<ans[0].first<<","<<ans[0].second;
    }
    else{
        cout<<"No pair found";
    }

    return 0;
}