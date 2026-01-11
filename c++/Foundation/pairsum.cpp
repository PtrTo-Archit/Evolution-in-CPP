#include<iostream>
#include<vector>
using namespace std;
vector<int> pairSum(vector<int>nums, int target){
    vector<int>ans;
    int n=nums.size();
    int i=0;
    int j=n-1;
    while(i<j){
        int pairSum=nums[i]+nums[j];
        if(pairSum>target){
            j--;
        }
        else if(pairSum<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            i++;
            j--;
            
        }
    }
    return ans;

}
int main(){
    int target;
    vector<int>nums={1,3,4,5,6,8};
    cin>>target;
    vector<int>ans=pairSum(nums,target);
    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<" "<<ans[4]<<" "<<ans[5];
    return 0;
}