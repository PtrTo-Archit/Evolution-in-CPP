// #include<iostream>
// using namespace std;
// void PrintArray(int nums[], int n){
//     for(int i=0;i<n;i++){
//         cout<<nums[i]<<" ";
//     }
// }
// int main(){
//     int arr[100];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

// PrintArray(arr,n);
// return 0;
// }

#include<iostream>
using namespace std;
void PrintArray(int *nums,int n) // here the function do not pass the size of array beacuse here nums is the pointer and it will print the size of pointer so 
                            //we have to also pass the size of array as the above code
{
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
int main(){
    int *ptr;
    cout<<sizeof(ptr)<<endl;
    int arr[]={1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(int);
    PrintArray(arr,n);
    return 0;
}