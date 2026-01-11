#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int minswaps(vector<int>&arr){
    int n=arr.size();
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({arr[i],i});
    }
    sort(v.begin(),v.end());
    int i=0;
    int count=0;
    while(i<n){
        while(v[i].second!=i){
            swap(v[i],v[v[i].second]);
            count++;
        }
        i++;
    }
    return count;

}
int main(){
vector<int>arr={2,10,1,5};
cout<<minswaps(arr);
}