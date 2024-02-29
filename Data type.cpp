#include <iostream>
#include <string>
using namespace std;

int main() {
    string ch;
    cin >> ch;

    if (ch == "Integer") {
        cout << "4";
    }
    else if (ch == "Long") {
        cout << "8";
    }
    else if (ch == "Double") {
        cout << "8";
    }
    else if (ch == "Character") {
        cout << "1";
    }
    return 0;
}
