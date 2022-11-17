// sum of first N numbers using parameterised way 
#include<iostream>
using namespace std;

void f(int i, int sum){
    if(i<0){
        cout<<sum;
        return;
    }else{
        f(i-1,sum+i);
    }
}

int main(){
    int n;
    cin>>n;
    f(n,0);
    return 0;
}