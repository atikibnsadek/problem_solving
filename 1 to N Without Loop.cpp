#include<iostream>
#include<vector>
using namespace std;

vector<int> printNos(int x) {
    // Write Your Code Here
    int i;
    vector<int>rslt;
    if(x>0){
        rslt=printNos(x-1);
        rslt.push_back(x);
    }
    return rslt;
}

int main(){
    int n,i;
    cin>>n;
    vector<int>rslt=printNos(n);
    for(i=0;i<rslt.size();i++){
        cout<<rslt[i];
    }
    return 0;
}
