#include<iostream>
#include<climits>
using namespace std;
int trap(int heights[],int n){
    int leftmax[20000];
    int rightmax[20000];
    leftmax[0]=heights[0];// To avoid negative trap.
    rightmax[n-1]=heights[n-1];
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],heights[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],heights[i+1]);
    }
    int waterTrapped=0;
    for(int i=0;i<n;i++){
        int curr_trapped=min(rightmax[i],leftmax[i]) - heights[i];
        if(curr_trapped>0){
            waterTrapped+=curr_trapped;
        }
    }
    cout<<"Total trapped water = "<<waterTrapped<<endl;
    return waterTrapped;
}
int main() {
    int heights[]={4,2,0,6,3,2,5};
    int n=sizeof(heights)/sizeof(int);
    trap(heights,n);
    return 0;

}