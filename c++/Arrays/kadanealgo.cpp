// // #include<iostream>
// // #include<climits>
// // using namespace std;
// // void MaxSum(int *arr, int n){
// //    int maxSum=INT_MIN;
// //    int currSum=0;
// //     for(int i=0;i<n;i++){
// //         currSum+=arr[i];
// //         maxSum=max(maxSum, currSum);
// //         if(currSum<0){
// //             currSum=0;
// //         }
           
// //     }
// //        cout<<"Maximum subarray sum is ="<< maxSum;
// // }
// // int main(){
// //     int arr[100];
// //     int size;
// //     cin>>size;
// //     for(int i=0;i<size;i++){
// //         cin>>arr[i];
// //     }
// //     MaxSum(arr,size);
// //     return 0;
// // }

// #include<iostream>
// #include<climits>
// using namespace std;
// int kadane(int arr[],int n){
//     int max_sum=INT_MIN;
//     int curr_sum=0;
//     for(int i=0;i<n;i++){
//         curr_sum+=arr[i];
//         max_sum=max(max_sum,curr_sum);
//         if(max_sum<0){
//             curr_sum=0;
//         }
//     }
//     return max_sum;

// }
// int main() {
//     int n;
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Maximum subarray sum is: "<<kadane(arr,n);
//     return 0;

// }
#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n){
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);
        if(maxSum<0){
            currSum=0;
        } 
    }
    return maxSum;
}
int main(){
    int arr[]={2,3,-5,6,-2};
    cout<<kadane(arr,5);
    return 0;



}