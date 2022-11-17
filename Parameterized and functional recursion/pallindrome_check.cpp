// code to check wheather a string is pallindrome or not using recursion. 

// Ans: this can be checked by just compairing the corresponding indices values. 
#include<iostream>
using namespace std;

bool f(int i,string word, int n){
    if(i>=n/2) return true;
    else if(word[i]!=word[n-i-1]) return false;
    else return f(i+1,word,n);
}

int main(){
    string word;
    cin>>word;
    int n = word.length();
    cout<<f(0,word,n);
    
    return 0;
}