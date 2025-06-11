#include<iostream>
#include<vector>
using namespace std;
   int main() {
    int x,y;
    cin>>x>>y;
    int count=0;
    int arr[x];
    int z;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
     z=arr[y-1];
    for(int i=0;i<x;i++){
        if(arr[i]>=z&&arr[i]>0){count ++;}
    }
    int flag=0;
    for(int i=0;i<x;i++){
        if(arr[i]==0) 
        flag++;
    }
    if(flag==x) cout<<0;
    
       else{ cout<<count;}
    
   }