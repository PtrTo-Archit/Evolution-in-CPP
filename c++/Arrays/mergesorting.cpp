// //M-1 Time Complexity -> O(mlogm)

// #include<iostream>
// #include<algorithm>
// using namespace std;

// void mergesort(int *num1, int *num2,int m, int n ){
//     for(int i=0;i<n;i++){
//         num1[m-n+i]=num2[i];
//     }
//     sort(num1,num1+m);
//     for(int i=0;i<m;i++){
//         cout<<num1[i]<<" ";
//     }

// }
// int main (){
// int num1[7]={3,5,6,9};
// int num2[3]={1,2,4};
// int m=sizeof(num1)/sizeof(int);
// int n=sizeof(num2)/sizeof(int);

// mergesort(num1,num2,m,n);
// return 0;
// }
// M-2 Time Complexity -> O(m)
#include<iostream>
using namespace std;

void mergesort(int *num1, int *num2,int m, int n ){
    int index=m-1;
    int i=m-n-1;
    int j=n-1;
    while(i>=0 && j>=0){
        if(num1[i]<=num2[j]){
            num1[index]=num2[j];
            j--;
            index--;
        }
        else if(num1[i]>num2[j]){
            num1[index]=num1[i];
            i--;
            index--;
        }
    }
    while(j>=0){
        num1[index]=num2[j];
        j--;
        index--;
    }
    for(int i=0;i<m;i++){
        cout<<num1[i]<<" ";
    }

}
int main (){
int num1[7]={3,5,6,9};
int num2[3]={1,2,4};
int m=sizeof(num1)/sizeof(int);
int n=sizeof(num2)/sizeof(int);

mergesort(num1,num2,m,n);
return 0;
}