#include <iostream>
using namespace std;

void splitIntoDigits(int num) {
    // Handle the case of zero separately
    if (num == 0) {
        cout << "0";
        return;
    }

    // Reverse the digits and print them
    int even=0,odd=0;
    while (num > 0) {
        int digit = num % 10;  // Extract the rightmost digit
        num /= 10; // Remove the rightmost digit
        if(digit%2==0){
            even+=digit;
        }
        else{
            odd+=digit;
        }
    }
    cout <<even<<" ";
    cout <<odd;
}

int main() {
    int num;
    cin >> num;
    splitIntoDigits(num);
    return 0;
}
