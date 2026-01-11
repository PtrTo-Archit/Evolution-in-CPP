//negative integer to binary.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a negative number: ";
    cin >> n;

    if (n >= 0) {
        cout << "Please enter a negative number." << endl;
        return 0;
    }
    //Note: In using unsigned int of negative no. the bit pattern do not change only the decimal value changes like for -5 the unsigned value is 4294967291
    unsigned int num = (unsigned int)n; // Treat as unsigned to get two's complement binary

    cout << "Binary (32-bit two's complement): ";
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        cout << bit;
    }

    cout << endl;
    return 0;
}
