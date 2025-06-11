#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n][n];
for(int i=0;i<n;i++)//row do isko{
{
for(int j=0;j<n;j++){
    cin>>arr[i][j];
}
}

    
for(int j=n-1;j>=0;j--){
    if(j%2==0){
        for(int i=n-1;i>=0;i--){
            cout<<arr[i][j];
        }
    }
    else{for(int i=0;i<n;i++){
        cout<<arr[i][j];
    }}
        
    }
}
