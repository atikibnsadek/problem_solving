#include <iostream>
#include <bitset>
#include <string>
using namespace std;

//long reverseBits(long n) {
//    // Write your code here.
//}
// Function to convert a decimal number to a  32-bit binary string
long decimalToBinary32(int n) {
    // Use bitset to convert the number to binary and then to a string
    bitset<32>binary(n);
    // Convert the bitset to a string and return it
    return binary;
}
int reverseBits(int n) {
    int newN = 0;
    for(int i = 0; i < sizeof(int) * 8; i++) {
        newN = newN << 1;
        if((n & 1) > 0) {
            newN = newN ^ 1;
        }
        n = n >> 1;
    }
    return newN;
}

int main() {
    int number;
    cin>>number;
    string binary = decimalToBinary32(number);
    cout <<binary<<endl;

    return  0;
}
