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


#include<iostream>
#include<algorithm>
using namespace std;
bool duplicate(int *arr,int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
            if(arr[i]==arr[i-1]){
                return 1;
                break;
            }
        }
        return 0;
    }
    
int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    if(duplicate(arr,size)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;

}