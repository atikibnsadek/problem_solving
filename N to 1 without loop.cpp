#include<iostream>
#include<vector>
using namespace std;

vector<int> printNos(int x) {
    vector<int>rev;
    if(x>0){
        rev.insert(rev.begin(), x);
        vector<int>rslt=printNos(x-1);
        rev.insert(rev.end(),rslt.begin(),rslt.end());
    }
//    vector<int>rev=rslt.back();
    return rev;
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

