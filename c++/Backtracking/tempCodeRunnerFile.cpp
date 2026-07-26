#include<iostream>
// using namespace std;
// int subsett(string &str,string &subset,int idx){
//     if(idx==str.size()){
//         cout<<subset<<endl;
//         return 1;
//     }
//     int count=0;
//     subset.push_back(str[idx]);
//     count+=subsett(str,subset,idx+1);
//     subset.pop_back();
//     count+=subsett(str,subset,idx+1);
//     return count;
// }
// int main(){
//     string str="abc";
//     string subset="";
//     int idx=0;
//     int count=subsett(str,subset,idx);
//     cout<<count;
//     return 0;
// }
