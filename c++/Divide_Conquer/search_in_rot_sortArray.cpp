#include<iostream>
using namespace std;
int search(int arr[],int si, int ei,int target){
    // here we have not taken si=ei beacause we have to return index for si = ei not -1 as it is a valid case
    if(si>ei){
        return -1;
    }
    int mid=si + (ei-si)/2;
    if(arr[mid]==target){
        return mid;
    }
    // L1
    if(arr[si]<=arr[mid]) {
        if(arr[si]<=target && arr[mid]>target){
            return search(arr,si,mid-1,target);//left
        }
        else{
            return search(arr,mid+1,ei,target);//right
        }
    }
    else{
        //L2
        if(arr[mid]<target && arr[ei]>=target){
            return search(arr,mid+1,ei,target);//right
        }
        else{
            return search(arr,si,mid-1,target);//left
        }
    }
}
int main() {
    int arr[]={4,5,6,7,0,1,2};
    int n=7;
    cout<<search(arr,0,n-1,4);
    return 0;

}