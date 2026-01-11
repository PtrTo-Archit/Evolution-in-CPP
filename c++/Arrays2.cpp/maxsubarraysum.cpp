// //Brute Force-> TC= O(n3)

// #include<iostream>
// #include<climits>
// using namespace std;
// void MaxSum(int *arr, int n){
//    int maxSum=INT_MIN;
//     for(int start=0;start<n;start++){
//         for(int end=start;end<n;end++){
//             int currSum=0;
             
//             for(int i=start;i<=end;i++){
//                 currSum+=arr[i];
                
//             }
//             cout<<currSum<<" ";
//             maxSum=max(maxSum,currSum);
//         }
//         cout<<endl;
       
//     }
//      cout<<"Maximum subarray sum is ="<< maxSum;

// }
// int main(){
//     int arr[100];
//     int size;
//     cin>>size;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     MaxSum(arr,size);
//     return 0;
//}

// Optimal -> TC= O(N2)
#include<iostream>
#include<climits>
using namespace std;
void MaxSum(int *arr, int n){
   int maxSum=INT_MIN;
    for(int start=0;start<n;start++){
        int currSum=0;
        for(int end=start;end<n;end++){
            currSum=currSum+arr[end];
             maxSum=max(maxSum,currSum);
                }
           
        }
        cout<<endl;
       
    
     cout<<"Maximum subarray sum is ="<< maxSum;

}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    MaxSum(arr,size);
    return 0;
}


