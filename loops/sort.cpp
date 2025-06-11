#include<iostream>
#include<vector>
#include<string>
using namespace std;
   int main() {
   int arr[5];
   for(int i=0;i<5;i++){
    cin>>arr[i];
   }
   for(int i=0;i<5;i++){
    if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;}
   }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
   }