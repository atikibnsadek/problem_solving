#include<iostream>
using namespace std;

bool isPrime(int n)
{
	// Write your code here.
	int i;
    if (n <= 1) {
        return false; // 0 and 1 are not prime
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    bool ans=isPrime(n);
    if(ans)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
