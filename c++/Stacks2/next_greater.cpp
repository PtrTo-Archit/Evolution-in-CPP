#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> next_greater(vector<int>& arr){
    stack<int>s;
    int n=arr.size();
    vector<int> ans(n,0);
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && arr[i]>=s.top()){
            s.pop();
        }
        ans[i]=s.empty()? -1:s.top();
        s.push(arr[i]);
    }
    return ans;
}
int main(){
    vector<int> arr={6,8,0,1,3};
    vector<int> ans=next_greater(arr);
    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
}