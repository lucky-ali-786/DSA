#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n-1;j++){
         if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        int i;
    for(i=0;i<n-1;i++){
       if(arr[i]>arr[i+1]){
        cout<<"no";
        break;
       }
    }
    if(i==n-1)cout<<"yes";

}