// // #include<iostream>
// // #include<climits>
// // using namespace std;
// // void MaxProfit(int *prices,int n){
// //     int bestbuy[10000];
// //     bestbuy[0]=INT_MAX;
// //     for(int i=1;i<n;i++){
// //         bestbuy[i]=min(bestbuy[i-1],prices[i-1]);
// //     }
// //     int maxProfit=0;
// //     for(int i=0;i<n;i++){
// //         int currProfit=prices[i]-bestbuy[i];
// //         maxProfit=max(maxProfit,currProfit);
// //     }
// //     cout<<"Maximum Profit is = "<<maxProfit<<endl;
// // }
// // int main(){
// //     int prices[100];
// //     int size;
// //     cin>>size;
// //     for(int i=0;i<size;i++){
// //         cin>>prices[i];
// //     }
// //     MaxProfit(prices,size);
// //     return 0;

// // }

// #include<iostream>
// #include<climits>
// using namespace std;
// int maxProfit(int prices[], int n){
//     int bestBuy[100000];
//     bestBuy[0]=INT_MAX;
//     for(int i=1;i<n;i++){
//         bestBuy[i]=min(bestBuy[i-1],prices[i-1]);
//         cout<<bestBuy[i]<<" ";
//     }
//     int max_profit=0; // this is zero because we want profit 0 for negative current profit
//     for(int i=0;i<n;i++){
//         int curr_profit=prices[i]-bestBuy[i];
//         max_profit=max(max_profit,curr_profit);
//     }
//     return max_profit;
// }
// int main(){
//     int prices[100];
//     int n;
//     cin>>n;
//     for(int  i=0;i<n;i++){
//         cin>>prices[i];
//     }
//     cout<<"Maximum profit is : "<<maxProfit(prices,n);
//     return 0;
// }
#include<iostream>
#include<climits>
using namespace std;
int maxProfit(int arr[],int n){
    int buy[100000];  //Auxillary array bestbuy.
    buy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        buy[i]=min(arr[i],buy[i-1]);
    }
    int profit=0;// here initial with 0 helps avoid negative profit.
    for(int i=0;i<n;i++){
       int currprofit=arr[i]-buy[i];
       profit=max(currprofit,profit);
    }
    return profit;
}
int main(){
    int arr[]={7,5,4,3,2,1};
    cout<<maxProfit(arr,6);
    return 0;

}