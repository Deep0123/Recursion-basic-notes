#include<iostream>
using namespace std;

void f(int i){
    if(i<1) return;
    else f(i-1);
    cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;
    f(n);
    return 0;
}