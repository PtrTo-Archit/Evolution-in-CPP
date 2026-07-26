//M-1 
// #include<iostream>
// #include<string>
// using namespace std;
// void Printsubset(string str, string subset){
//     int n=str.size();
//     if(n==0){
//         cout<<subset<<endl;
//         return;
//     }
    
//     char ch= str[0];
//     Printsubset(str.substr(1,n-1), subset + ch); 
//     Printsubset(str.substr(1,n-1), subset);

// }
// int main() {
//     string str="abc";
//     string subset="";
//     Printsubset(str, subset);
//     return 0;
// }
//M-2
// #include<iostream>
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

//M-3
#include<iostream>
using namespace std;
int subsett(string &str,string &subset){
    int n=str.size();
    int total=1<<n; //2^n
    int count=0;
    for(int mask=0;mask<total;mask++){
        subset="";
        for(int i=0;i<n;i++){
            if(mask &(1<<i)){
                subset+=str[i];
            }
        }
        cout<<subset<<endl;
        count++;
    }
    return count;

}
int main(){
    string str="abc";
    string subset="";
    int count=subsett(str,subset);
    cout<<count;
    return 0;
}