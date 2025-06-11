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
        int min=arr[0];
        for(int i=1;i<=n-1;i++){
            if(min>arr[i]) min=arr[i];

        }
    cout<<min;
}