// count the subsequences with sum K. 
#include<iostream>
#include<vector>
using namespace std;

int f(int i, int s, int arr[], int n, int sum){
    if(i==n){
        // condition satisfied
        if(s==sum) return 1;
        // condition not satisfied
        else return 0;
    }
    
    s += arr[i];
    int l = f(i+1, s, arr, n, sum);
    s -= arr[i];
    
    //  not pick
    int r = f(i+1,s,arr,n,sum);
    return l+r;
}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    cout<<f(0,0,arr,n,sum);
    return 0;
}