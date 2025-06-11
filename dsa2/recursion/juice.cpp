#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float sum=0;
   float ans;
   for(int i=0;i<n;i++){
    sum+=arr[i];
   }
   ans=sum/n;
   cout<<ans;
}