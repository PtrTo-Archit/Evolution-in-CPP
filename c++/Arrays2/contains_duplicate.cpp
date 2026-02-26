// #include<iostream>
// using namespace std;
// bool duplicate(int *arr,int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 return 1;
//                 break;
//             }
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[100];
//     int size;
//     cin>>size;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     if(duplicate(arr,size)){
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"False"<<endl;
//     }
//     return 0;

// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// bool duplicate(int *arr,int n){
//     sort(arr,arr+n);
//     for(int i=0;i<n;i++){
//             if(arr[i]==arr[i-1]){
//                 return 1;
//                 break;
//             }
//         }
//         return 0;
//     }
    
// int main(){
//     int arr[100];
//     int size;
//     cin>>size;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     if(duplicate(arr,size)){
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"False"<<endl;
//     }
//     return 0;

// }
// M-3 
#include<iostream>
#include<unordered_set>
using namespace std;
bool duplicate(int arr[],int n){
    unordered_set<int>set;
    for(int i=0;i<n;i++){
        if(set.find(arr[i])==set.end()){
            set.insert(arr[i]);
        }
        else{
            return true;
        }
    }
    return false;
}
int main(){
    int arr[]={1,1,1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    cout<<boolalpha<<duplicate(arr,n);
    return 0;
}