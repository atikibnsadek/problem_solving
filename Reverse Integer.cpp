#include<iostream>
using namespace std;

int reverse(int x) {
    int absX = abs(x);
    int a = 0;
    while(absX > 0){
        int digit = absX% 10;
        a = a * 10 + digit;
        absX/= 10;
    }
    return (x < 0) ? -a : a;
}

int main(){
    int x;
    cout<<"x=";
    cin>>x;
    int a= reverse(x);
    cout<<a;
    return 0;
}
