#include<iostream>
#include<climits>
using namespace std;
int main(){//very much important hai ye code''
    int n;
    cin>>n;
       int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        cout<<endl;}
        int max=arr[0];
        for(int i=1;i<=n-1;i++){
            if(max<arr[i]) max=arr[i];}
           int smax=INT_MIN;
    for(int j=0;j<=n-1;j++){
        if(smax<arr[j]&&arr[j]!=max){
            smax=arr[j];
        }
    }
    cout<<"The second largest element is"<<" "<<smax;}