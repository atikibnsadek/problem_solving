#include<iostream>
using namespace std;

bool palindrome(int n)
{
    // Write your code here
    int temp=n,digit,rslt=0;
    do {
        digit = temp % 10;
        rslt = rslt * 10 + digit;
        temp /= 10;
    } while (temp != 0);

    return n == rslt;
//    while(temp!=0){
//        digit=temp%10;
//        rslt=rslt*10+digit;
//        temp/=10;
//    }
//     return n==rslt?true:false;
}

int main(){
    int n;
    cin>>n;
    bool ispalind=palindrome(n);
    if(ispalind){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
