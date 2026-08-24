#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int max_area(vector<int> & height){
    int n=height.size();
    stack<int>s;
    vector<int> nsl(n,-1);
    for(int i=0;i<n;i++){
        int curr=height[i];
        while(!s.empty() && curr<=height[s.top()]){
            s.pop();
        }
        nsl[i]=s.empty()? -1:s.top();
        s.push(i);
    }
     while(!s.empty()){
        s.pop();
    }
    vector<int>nsr(n,n);
    for(int i=n-1;i>=0;i--){
        int curr=height[i];
        while(!s.empty() && curr<=height[s.top()]){
            s.pop();
        }
        nsr[i]=s.empty()? n: s.top();
        s.push(i);
    }
    int maxArea=0;
    for(int i=0;i<n;i++){
        int area=height[i] * (nsr[i]-nsl[i]-1);
        maxArea=max(area,maxArea);
    }
    return maxArea;
}
int main(){
    vector<int>height={2,1,5,6,2,3};
    cout<<max_area(height);
    return 0;
}