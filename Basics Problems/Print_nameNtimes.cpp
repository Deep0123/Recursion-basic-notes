#include<iostream>
using namespace std;
void f(int i, int n, string name){
    if(i>n) return;
    else cout<<name<<endl;
    f(i+1,n,name);
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    string name;
    cout<<"enter your name: ";
    cin>>name;
    f(1,n,name);
    return 0;
}