#include<iostream>
#include <cmath>
using namespace std;

bool checkArmstrong(int n){
	//Write your code here
    int temp=n,p,s=0;
    while(temp!=0){
        temp/=10;
        ++p;
    }
    temp=n;
    while(temp!=0){
        int digit=temp%10;
        s=s+pow(digit,p);
        temp/=10;
    }
    return n==s;
}
int main(){
    int n;
    cin>>n;
    bool arms=checkArmstrong(n);
    if(arms){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
