#include<iostream>
#include<vector>
using namespace std;

long long sumFirstN(long long n) {
    // Write your code here.
    if(n==0){
        return 0;
    }
    return n+sumFirstN(n-1);
}

int main(){
    long long n;
    cin>>n;
    long long rslt=sumFirstN(n);
    cout<<rslt;
    return 0;
}
