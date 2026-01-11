#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int> &arr, int si,int mid, int ei){
    int i=si;
    int j=mid+1;
    int index=0;
    int ans=0;
    vector<int>SortedArr;
    while(i<=mid && j<=ei){
        if(arr[i]>arr[j]){
            SortedArr.push_back(arr[j++]);
            ans+=mid-i+1;
        }
        else{
            SortedArr.push_back(arr[i++]);
        }
    }
    while(i<=mid){
        SortedArr.push_back(arr[i++]);
    }
    while(j<=ei){
        SortedArr.push_back(arr[j++]);
    }
    for(int i=si;i<=ei;i++){
        arr[i]=SortedArr[index++];
    }
    return ans;
}
void PrintArr(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int countInversion(vector<int> &arr,int si, int ei){
    if(si>=ei){
        return 0;
    }
    int mid= si + (ei - si)/2;
    int leftInversion=countInversion(arr, si, mid);
    int rightInversion= countInversion(arr,mid+1,ei);
    int crossInversion= merge(arr,si,mid,ei);
    return leftInversion + rightInversion + crossInversion;
}
int main() {
    vector<int> arr={2,4,1,5,3};
    int ans= countInversion(arr, 0,arr.size() - 1);
    cout<<"No. of inversion counts are: "<<ans<<endl;
    PrintArr(arr);
    return 0;

}