// print any one subsequnce whose sum is K. 
#include<iostream>
#include<vector>
using namespace std;

bool f(int i, vector<int>&ds, int s, int arr[], int n, int sum){
    if(i==n){
        // condition satisfied
        if(s==sum){
            for(auto it : ds) cout<< it <<" ";
            cout<<endl;
            return true;
        }
        // condition not satisfied
        else return false;
    }
    ds.push_back(arr[i]);
    s += arr[i];
    if(f(i+1, ds, s, arr, n, sum)==true){
        return true;
    }
    s -= arr[i];
    ds.pop_back();
    //  not pick
    if(f(i+1,ds,s,arr,n,sum)==true) return true;
    return false;
}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    f(0,ds,0,arr,n,sum);
    return 0;
}