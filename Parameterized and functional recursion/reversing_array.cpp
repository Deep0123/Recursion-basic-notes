// reversing of an array using two variables 
#include<iostream>
using namespace std;

void f(int l ,int r , int a[]){
    if(l>=r){
        return;
    }else{swap(a[l],a[r]);
    f(l+1,r-1,a);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    f(0,n-1,a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}