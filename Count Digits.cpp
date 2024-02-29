#include<iostream>
using namespace std;

void countDigits(int n){

	int temp=n,i=0;

    while (temp > 0){
        int digit = temp%10;
        temp/=10;
        if(digit!=0&&n%digit==0){
            i++;
        }
    }
    cout<<i<<endl;
}
int main(){
 int n;
    cin >> n;
    countDigits(n);
    return 0;
}
