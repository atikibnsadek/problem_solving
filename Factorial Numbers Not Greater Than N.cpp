#include<iostream>
#include<vector>
using namespace std;

//submitted ans
//vector<long long> factorialNumbers(long long n) {
//    vector<long long> ans;
//    long long int fact = 1;
//    long long int i = 2;
//    while(fact <= n) {
//        ans.push_back(fact);
//        fact = fact * i;
//        i++;
//    }
//    return ans;
//}

vector<long long> factorialNumbers(long long n) {
   vector<long long>rslt;
    if(n == 0 || n == 1) {
        rslt.push_back(1);
        return rslt;
    }
    vector<long long> prevFactorial = factorialNumbers(n-1);
    long long lastFactorial = prevFactorial.back() * n; // Calculate the factorial of n
    prevFactorial.push_back(lastFactorial); // Add the factorial of n to the result vector
    return prevFactorial;
}
int main(){
    long long n;
    cin>>n;
    vector<long long>rslt=factorialNumbers(n);
    for(int i=0;i<rslt.size();i++){
        if(rslt[i]<n){
            cout<<rslt[i];
        }
    }
    return 0;
}

