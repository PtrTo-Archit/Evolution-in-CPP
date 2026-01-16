#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int min_swap_to_sort(int arr[],int n){
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({arr[i],i});
    }
    sort(v.begin(),v.end());
    int i=0;
    int count =0;
    while(i<n){
        while(v[i].second!=i){
            count++;
            swap(v[i],v[v[i].second]);
        }
        i++;
    }
    return count;
}
int main(){
    int arr[]={2,10,1,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Minimum swaps required : "<<min_swap_to_sort(arr,n);
    return 0;
}