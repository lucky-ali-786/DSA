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
//even
for(int i=0;i<n;i++){
    if (i%2==0)
    {
        arr[i]=arr[i]+10;
    }
    else{arr[i]*=2;}

}
for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
        }
    }