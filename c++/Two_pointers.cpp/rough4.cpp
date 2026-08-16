// #include<iostream>
// using namespace std;
// int single(int arr[],int n){
//     if(n==0) return 0;
//     if(arr[0]!=arr[1]){
//         return 0;
//     }
//     if(arr[n-1]!=arr[n-2])return (n-1);
//     int i=1;
//     int j=n-2;
//     while(i<=j){
//         int mid=i + (j-i)/2;
//         if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
//             return mid;
//         }
//         else if(arr[mid]==arr[mid+1]){
//             if(mid%2==0){
//                 i=mid+1;
//             }
//             else{
//                j=mid-1; 
//             }
//         }
//         else{
//             if(mid%2!=0){
//                 i=mid+1;
//             }
//             else{
//                 j=mid-1;
//             }
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,1,2,3,3,4,4,8,8};
//     int n=9;
//     int mid=single(arr,n);
//     if(mid!=-1){
//         cout<<arr[mid]<<endl;
//     }
    
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> plus_one(vector<int>& digit){
//     int n=digit.size();
//     int sum=0;
//     int carry=1;
//     for(int i=n-1;i>=0;i--){
//         sum=digit[i]+ carry;
//         digit[i]=sum%10;
//         carry=sum/10;
//     }
//     if(carry){
//         digit.insert(digit.begin(),carry);
//     }
//     return digit;
// }
// int main(){
//     vector<int> digit={1,2,3};
//     int n=3;
//     vector<int>newDigit=plus_one(digit);
//     for(int val: newDigit){
//         cout<<val<<" ";
//     }
//     return 0;
// }
// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int misssing(int arr[],int n,int k){
//     int val=1;
//     int count=0;
//     unordered_set<int>s(arr,arr+n);
//     while(count<k){
//         if(s.find(val)==s.end()){
//             count++;
//         }
//         val++;
//     }
//     return val-1;
// }
// int main(){
//     int arr[]={1,2,4,7,9};
//     int n=5;
//     int k=7;
//     int kth_val=misssing(arr,n,k);
//     cout<<kth_val<<endl;
//     return 0;

// }
// #include<iostream>
// #include<string>
// using namespace std;
// void subset(string &str,string &subsets,int idx){
//     if(idx==str.size()){
//         cout<<subsets<<endl;
//         return;
//     }
//     subsets.push_back(str[idx]);
//     subset(str,subsets,idx+1);
//     subsets.pop_back();
//     subset(str,subsets,idx+1);


// }
// int main(){
//     string str="abc";
//     string subsets="";
//     subset(str,subsets,0);
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    

}
// #include<iostream>
// using namespace std;
// void permutation(string &str, string &subset,bool used[]){
//     if(subset.size()==str.size()){
//         cout<<subset<<endl;
//         return;
//     }
//     for(int i=0;i<str.size();i++){
//         if(used[i]){
//             continue;
//         }
//         subset.push_back(str[i]);
//         used[i]=true;
//         permutation(str,subset,used);

//         subset.pop_back();
//         used[i]=false;
//     }
// }
// int main(){
//     string str="abc";
//     string subset="";
//     bool used[26]={false};
//     permutation(str,subset,used);
//     return 0;
// }