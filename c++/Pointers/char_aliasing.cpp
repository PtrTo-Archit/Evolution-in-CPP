#include <iostream>
using namespace std;

int main() {
    int num = 1025;  // 1025 = 0x00000401 in hex (on little-endian machines)

    char *p = (char*)&num;  // char aliasing the int
    
    cout<<(int)p[1]<<endl;

    // Print each byte one by one
    cout << "Byte 1: " << (int)p[0] << endl;
    cout << "Byte 2: " << (int)p[1] << endl;
    cout << "Byte 3: " << (int)p[2] << endl;
    cout << "Byte 4: " << (int)p[3] << endl;

    return 0;
}