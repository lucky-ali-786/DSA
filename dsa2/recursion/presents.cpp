#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=1;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
        if(arr[i]==sum) cout<<i+1<<" ";
    }
sum++;}
}