#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]) {
            continue;
        }
        else{
            sum++;
        }
    } 
    sum++;
    cout<<sum;
}