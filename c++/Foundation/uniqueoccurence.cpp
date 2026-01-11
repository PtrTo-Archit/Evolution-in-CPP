#include<iostream>
using namespace std;
void occurence(int arr[], int n){
    for(int i=0;i<n;i++){
        bool repeated=false;
        // this inner loop is to check if arr[i] has occured before
        for(int j=0;j<i;j++){
            if(arr[j]==arr[i]){
                 repeated =true;
                break;
            }
        }   // if repeated then no need to do counting skip and iterate for next i
            if(repeated){
                continue;
            }
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            cout<<"the number "<<arr[i]<<" occurs "<<count<<" times "<<endl;
        }
    }
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    occurence(arr,size);
    return 0;
}