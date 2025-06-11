#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
     cin>>arr[i];
     cout<<endl;}
     int n2;
    cin>>n2;
    int arr1[n2];
    bool flag=true;
    for(int i=0;i<=n2-1;i++){
     cin>>arr1[i];
     cout<<endl;}
    for(int i=0;i<=n-1;i++){
        if(arr1[i]==arr[i]){
            flag=false;
            break;
        }
    } 
    if(flag==false){
    cout<<"the given array is a subset";}
    else{cout<<"no";}
    
      
        
        
        
        
        }