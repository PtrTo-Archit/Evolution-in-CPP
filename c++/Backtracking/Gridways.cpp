// M-1 Time complexity -O(2^(m+n))

// #include<iostream>
// using namespace std;
// int GridWays(int r,int c, int n,int m){
//     if(r==n-1 && c==m-1){
//         return 1;
//     }
//     if(r>=n || c>=m){
//         return 0;
//     }
//     int val1=GridWays(r,c+1,n,m);
//     int val2=GridWays(r+1,c,n,m);
//     return val1 + val2;
// }
// int main() {
//     int n=3;
//     int m=3;
//    cout<<"Total Ways : "<< GridWays(0,0,n,m);
// }

//M-2 Using nCR
// #include<iostream>
// using namespace std;
// int nCr(int n,int r){
//     if(r>n-r){
//         r=n-r;
//     }

//     long long ans=1;
//     for(int i=1;i<=r;i++){
//         ans=ans*(n-r+i)/i;
//     }
//     return ans;
// }
// int gridWays(int n,int m){
//    long long count=nCr(n+m-2,n-1);
//    return count;
// }
// int main(){
//     int n=3;
//     int m=3;
//     int count=gridWays(n,m);
//     cout<<count;
//     return 0;
// }