// subsequences --> similar to a subset of an array. 
// subsequences --> A contiguous or non-contiguous sequences which follows the order. 


// Note: A subarray is just contiguous but a susequence can be contiguous ot non-contiguous.

// C++ code to print all the subsequence using recursion. 

#include<iostream>
#include<vector>
using namespace std;

void f(int i, vector<int>&ds, int arr[], int n){
    if(i==n){
        for(auto it : ds){
            cout<< it <<" ";
        }
        if(ds.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    // take or pick the the [articular indexinto the subsequence 
    ds.push_back(arr[i]);
    f(i+1,ds,arr,n);
    ds.pop_back();

    // not pick, or not take condition, thiselement is not added to your subsequence  
    f(i+1,ds,arr,n);
    
}

int main(){
    // int n;
    // cin>>n;
    int arr[]={3, 1, 2};
    // for(int i = 0;i < n; i++){
    //     cin>>arr[i];
    // }
    int n = 3;
    vector<int> ds;
    f(0,ds,arr,n);
    return 0;
}