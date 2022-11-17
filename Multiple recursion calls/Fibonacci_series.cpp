// Code to print Fibonacci series using multiple recursion calls 

// code to print the nth index value of a fibonacci series 
#include<iostream>
using namespace std;

int f(int n){
    if (n<=1)return n;
    else return f(n-1)+f(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<f(n)<<" ";
    return 0;
}