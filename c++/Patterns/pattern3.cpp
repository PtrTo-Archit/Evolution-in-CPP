                                                                /* Pattern 3 
                                                                1 2 3 4
                                                                1 2 3 4
                                                                1 2 3 4
                                                                1 2 3 4*/

/*M-1

#include<iostream>      
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n) {
        int j=1;
        int s=1;
        while(j<=n){
            
            cout<<s;
            s=s+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}   */

#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n) {
        int j=1;
        while(j<=n){
            
            cout<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
} 