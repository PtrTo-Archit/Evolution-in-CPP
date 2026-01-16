#include<iostream>
using namespace std;
void trap(int heights[],int n){
    int leftmax=heights[0];
    int rightmax=heights[n-1];
    int low=1;
    int high=n-2;
    int ans=0;
    while(low<=high){
        leftmax=max(leftmax,heights[low]);
        rightmax=max(rightmax,heights[high]);
        if(leftmax<rightmax){
            ans+=leftmax-heights[low];
            low++;
        }
        else{
            ans+=rightmax-heights[high];
            high--;
        }
    }
    cout<<ans<<endl;
    return;
}
int main(){
    int heights[]={4,2,0,6,3,2,5};
    int n=sizeof(heights)/sizeof(int);
    trap(heights,n);
    return 0;

}