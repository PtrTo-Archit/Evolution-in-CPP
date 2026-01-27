#include<iostream>
using namespace std;
int main(){
    char work[]="code";
    cout<<work<<endl;
    work[0]='m';
    cout<<work<<endl;
    //here in case of pointer it is only a read only memory we cannot modify it to mode
    const char *str="code";
    cout<<str;

}
// cin ignores whitespaces 
// #include <iostream>
// #include <string>

// int main() {
//     std::string str = "code";
    
//     std::cout << "Initial sizeof: " << sizeof(str) << " | Capacity: " << str.capacity() << std::endl;

//     // Add a massive amount of text
//     str += " This is a very long string that will definitely exceed the internal buffer size of the string object.";

//     std::cout << "After growth sizeof: " << sizeof(str) << " | Capacity: " << str.capacity() << std::endl;

//     return 0;
// }