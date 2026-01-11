#include<iostream>
#include<vector>
using namespace std;
vector<int> PairSum(int arr[],int n, int target){
    vector<int>ans;
    int i=0;
    int j=n-1;
    while(i<j){
    int pairSum=arr[i]+arr[j];
    if(pairSum>target){
        j--;
    }
    else if(pairSum<target){
        i++;
    }
    else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
}

}
int main() {
int arr[]={2,5,7,8,11};// -> Two pointer approach requires sorted array.
vector<int> ans=PairSum(arr,5,9);
cout<<ans[0]<<" ,"<<ans[1]<<endl;
return 0;
}