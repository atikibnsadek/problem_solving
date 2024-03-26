#include<iostream>
#include<vector>
using namespace std;

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> rslt(n, 0);
    if(n >= 1) rslt[0] = 0;
    if(n >= 2) rslt[1] = 1;
    for(int i = 2; i < n; i++) {
        rslt[i] = rslt[i - 1] + rslt[i - 2];
    }
    return rslt;
}

int main(){
    int n;
    cin>>n;
    vector<int>rslt=generateFibonacciNumbers(n);
    for(int i=0;i<rslt.size();i++){
         cout<<rslt[i];
    }
    return 0;
}
