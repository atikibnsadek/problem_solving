#include<iostream>
using namespace std;

void selection_sort(int a[],int n){  ///10,5,2,8,7 | 8,10
    int i,j,index_min, temp;
    for(i=0;i<n-1;i++){    /// selecting index one after the other. the last one doesn't need to be selected.
        index_min=i;
        for(j=i+1;j<n;j++){///comparing with the selected 1st one from the 2nd one till the last one, i.e. a[i] with every other number.
            if(a[j]<a[index_min]){
                index_min=j;
            }
        }
        if(index_min!=i){ ///swapping the min with the selected index.
            temp=a[i];
            a[i]=a[index_min];
            a[index_min]=temp;
        }
    }
}

int main(){
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    selection_sort(a, n);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

