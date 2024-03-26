#include<iostream>
using namespace std;

int sumOfAllDivisors(int n){
	// Write your code here.
    int i,temp=n,s=0;
    static int sum;
    for(i=1;i<=temp;i++){
        if(n%i==0){
            s+=i;
        }
    }
    temp--;
    if (temp>=0){
        sum+=s;
        sumOfAllDivisors(temp);
    }
    return sum;
}

int main(){
    int n,sum,i;
    cin>>n;
    sum=sumOfAllDivisors(n);
//    for(i=1;i<=n;i++){
//        sum+=sumOfAllDivisors(i);
//    }
    cout<<sum;
    return 0;
}
