#include<iostream>
using namespace std;

int main(){

    int n,next,pre=0,curr=1,i;
    cin>>n;
    for(i=0;i<n;i++){

        next=pre+curr;
        pre=curr;
        curr=next;
    }
    cout<<pre;
    return 0;
}
