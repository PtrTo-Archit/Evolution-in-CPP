#include<iostream>
#include<vector>
using namespace std;
int MaxWater(int height[],int n){
    int i=0;
    int j=n-1;
    int maxWater=0;
    while(i<j){
        int width=j-i;
        int h=min(height[i],height[j]);
        int currWater=width*h;
        maxWater=max(maxWater,currWater);
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
    }
    return maxWater;
}

int main(){
    int height[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(height)/sizeof(int);
    int max=MaxWater(height,n);
    cout<<"Maximum water in a container is :"<<max<<endl;
    return 0;

}