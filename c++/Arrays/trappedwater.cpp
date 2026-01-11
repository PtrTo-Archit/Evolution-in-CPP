// #include<iostream>
// using namespace std;
// int TrappedWater(int *height, int n){
//     int leftmax[20000],rightmax[20000];
//     leftmax[0]=height[0];
//     rightmax[n-1]=height[n-1];
//     for(int i=1;i<n;i++){
//         leftmax[i]=max(leftmax[i-1],height[i-1]);
//     }
//     for(int i=n-2;i>=0;i--){
//         rightmax[i]=max(rightmax[i+1],height[i+1]);
//     }
//     int waterTrapped=0;
//     for(int i=0;i<n;i++){
//         int currWater=min(rightmax[i],leftmax[i])-height[i];
//         if(currWater>0){
//             waterTrapped+=currWater;
//         }
//     }
//     return waterTrapped;
// }
// int main(){
//     int height[100];
//     int size;
//     cin>>size;
//     for(int i=0;i<size;i++){
//         cin>>height[i];
//     }
//   cout<<"Total Water Trapped is = "<<TrappedWater(height,size)<<endl;
//   return 0;
// }

#include<iostream>
#include<climits>
using namespace std;
void trappedwater(int arr[], int n){
    int leftmax[100000];
    int rightmax[100000];
    leftmax[0]=arr[0];
    rightmax[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],arr[i-1]); // Same logic as bestBuy array
    }
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],arr[i+1]);
    }
    int water_trapped=0;
    for(int i=0;i<n;i++){
        int curr_trapped=min(leftmax[i],rightmax[i]) - arr[i];
        if(curr_trapped>0){
            water_trapped+=curr_trapped;
        }
    }
    cout<<"Total Water Trapped : "<<water_trapped;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    trappedwater(arr,n);
    return 0;

}