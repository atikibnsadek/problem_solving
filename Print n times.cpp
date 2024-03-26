#include<iostream>
#include<vector>
using namespace std;
vector<string> printNTimes(int n) {
	// Write your code here.
    if(n==0){
        return {};
    }
    vector<string>temp=printNTimes(n-1);
    temp.push_back("Coding Ninjas ");
    return temp;
}

//vector<string> printNTimes(int n) {
//	// Write your code here.
//    if(n>0){
//        cout<<"Coding Ninjas";
//    }
//    printNTimes(n-1);
//}

int main(){
    int n,i;
    cin>>n;
    vector<string>rslt=printNTimes(n);
    for(i=0;i<rslt.size();i++){
        cout<<rslt[i];
    }
    return 0;
}
