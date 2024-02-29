#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"Greater"<<endl;
    }
    else if(a<b){
        cout<<"Smaller"<<endl;
    }
    else{
        cout<<"Equal";
    }
    return 0;
}
