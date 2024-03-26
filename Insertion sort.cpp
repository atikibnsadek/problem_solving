#include<iostream>
using namespace std;

void insertion_sort(int a[],int n){ ///2,5,3,1,4
    int i,j,item;
    for(i=1;i<n;i++){
        item=a[i];
        j=i-1;
        while(j>=0&&a[j]>item){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=item;
    }
}

int main(){
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    insertion_sort(a, n);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

