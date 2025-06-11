#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    int x=0;
    int arr[]={4,56,3,2,65,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<k;i++)
    {   int min=arr[i];
        for(int j=i;j<n;j++){
        if(min>arr[j]) {min=arr[j];
        x=j;}
    }
    swap(arr[i],arr[x]);
    }
    cout<<arr[k-1];
}