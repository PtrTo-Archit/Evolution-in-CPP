#include<iostream>
using namespace std;
 int SearchRotatedArray(int *arr, int n, int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        
        int mid=low + (high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        //check if left of mid is sorted
        else if(arr[low]<=arr[mid]){
            // check if the target is present in left of mid
            if(target>=arr[low] && target<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        //when right is sorted
        else{
            //check if the target is present in right of mid
            if(target>=arr[mid+1]&& target<=arr[high]){
                low=mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[100];
    int size;
    int target;
    cin>>size>>target;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int idx= SearchRotatedArray(arr,size,target);
    if(idx==-1){
        cout<<"Target not found"<<endl;
    }
    else{
        cout<<"Target is at index = "<<SearchRotatedArray(arr,size,target)<<endl;
    }
    return 0;
}