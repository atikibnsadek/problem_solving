#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

bool isPalindrome(string& str) {
    // Write your code here.
    int j=str.size();
    for(int i=0;i<str.size();i++){
        j--;
        if(str[i]!=str[j]){
            return false;
        }
    }
    return true;
}

int main(){
    string n;
    cin>>n;
    if(isPalindrome(n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
