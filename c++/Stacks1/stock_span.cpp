#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void spain (vector<int>& prices, vector<int>& span){
    span[0]=1;
    stack<int>s;
    s.push(0);
    for(int i=1;i<prices.size();i++){
        int curr_price=prices[i];
        while(!s.empty() && curr_price>=prices[s.top()]){
            s.pop();
        }
        if(s.empty()){
            span[i]=i+1;
        }
        else{
            int prevhigh=s.top();
            span[i]=i-prevhigh;
        }
        s.push(i);

    }
    for(int i=0;i<prices.size();i++){
        cout<<span[i]<<" ";
    }
    cout<<endl;
}
int main(){
   vector<int>prices={100,80,60,70,60,85,100};
   vector<int>span={0,0,0,0,0,0,0};
   spain(prices,span);
   return 0;
}