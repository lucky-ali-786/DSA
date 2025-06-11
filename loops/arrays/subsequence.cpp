#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
#include<string>
using namespace std;
void subset(int arr[],vector<int> v,int n,int idx,int k){
    if(idx==n){ 
        if(v.size()==k){
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;}
        return;}
        if(v.size()+(n-idx)<k);
    subset(arr,v,n,idx+1,k);
    v.push_back(arr[idx]);
    subset(arr,v,n,idx+1,k);
    
}
int main(){
    vector<int> v;
    int k=3;
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    subset(arr,v,n,0,k);}