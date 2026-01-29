#include<iostream>
#include<string>
using namespace std;
bool AlmostEqual(string str1,string str2){
    if(str1.length()!=str2.length()){
        cout<<"Not almost equal";
        return false;
    }
    int diffcount=0;
    int count[26]={0};
    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[i]){
            diffcount++;
        }
        if(diffcount>2){
            cout<<"Not almost equal";
            return false;
        }
        count[str1[i]-'a']++;
    }
    for(int i=0;i<str2.length();i++){
        if(count[str2[i]-'a']==0){
            cout<<"Not Almost equal";
            return false;
        }
        else{
            count[str2[i]-'a']--;
        }
    }
    cout<<"Are almost equal";
    return true;
}
int main(){
    string str1="bank";
    string str2="bink";
    AlmostEqual(str1,str2);
    return 0;
}
//M-2

// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// bool AlmostEqual(string str1, string str2) {
//     if (str1.length() != str2.length()) return false;

//     vector<int> diff;

//     for (int i = 0; i < str1.length(); i++) {
//         if (str1[i] != str2[i]) {
//             diff.push_back(i);
//         }
//     }

//     if (diff.size() == 0) return true;

//     if (diff.size() == 2) {
//         int i = diff[0];
//         int j = diff[1];
//         return (str1[i] == str2[j] && str1[j] == str2[i]);
//     }

//     return false;
// }

// int main() {
//     string str1 = "bank";
//     string str2 = "bink";

//     if (AlmostEqual(str1, str2))
//         cout << "Are almost equal";
//     else
//         cout << "Not almost equal";

//     return 0;
// }

// M-3
// bool solve(string str1, string str2) {
//     if (str1 == str2) return true;
//     if (str1.length() != str2.length()) return false;

//     int first = -1, second = -1;
//     int diffcount = 0;

//     for (int i = 0; i < str1.length(); i++) {
//         if (str1[i] != str2[i]) {
//             diffcount++;
//             if (diffcount > 2) return false;
            
//             if (first == -1) first = i;
//             else second = i;
//         }
//     }

//     // Must have exactly 2 differences, and swapping them must work
//     return (diffcount == 2 && 
//             str1[first] == str2[second] && 
//             str1[second] == str2[first]);
// }
