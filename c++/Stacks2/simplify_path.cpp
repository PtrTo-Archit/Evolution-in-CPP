// #include <iostream>
// #include <stack>
// #include <vector>
// #include <string>

// using namespace std;

// string simplify(string &path) {
//     string curr = "";
//     vector<string> pathVec;
//     stack<string> s;

//     for (int i = 0; i < path.size(); i++) {
//         if (path[i] == '/') {
//             pathVec.push_back(curr);
//             curr = "";
//         } else {
//             curr += path[i];
//         }
//     }
//     if (curr != "") {
//         pathVec.push_back(curr);
//     }

//     for (int i = 0; i < pathVec.size(); i++) {
//         if (pathVec[i] == "" || pathVec[i] == ".") {
//             continue;
//         } else if (pathVec[i] == "..") {
//             if (!s.empty()) {
//                 s.pop();
//             }
//         } else {
//             s.push(pathVec[i]);
//         }
//     }

//     string result = "";
//     while (!s.empty()) {
//         result = "/" + s.top() + result;
//         s.pop();
//     }

//     return result.empty() ? "/" : result;
// }

// int main() {
//     string path = "/home/user/Documents/../Pictures";
//     cout << simplify(path) << endl;
//     return 0;
// }
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
string simplify(string path){
    string curr="";
    vector<string>pathVec;
    stack<string>s;
    for(int i=0;i<path.size();i++){
        if(path[i]=='/'){
            pathVec.push_back(curr);
            curr="";
        }
        else{
            curr+=path[i];
        }
    }
    if(curr!=""){
        pathVec.push_back(curr);
    }
    for(int i=0;i<pathVec.size();i++){
        if(pathVec[i]=="." || pathVec[i]==""){
            continue;
        }
        else if(pathVec[i]==".."){
            if(!s.empty()){
                s.pop();
            }
        }
        else{
            s.push(pathVec[i]);
        }
    }
    string result="";
    while(!s.empty()){
        string top=s.top();
        s.pop();
        result="/" + top + result;
    }
    
    return result.empty()? "/": result;

}
int main(){
    string path="/home/user/Documents/../Pictures";
    cout<<simplify(path);
    return 0;
}