#include<iostream>
#include<climits>
using namespace std;
int main(){
      bool flag=true;
      int n;
   cin>>n;
       int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        cout<<endl;}
     for(int i=0;i<=n-1;i++){
      for(int j=i+1;j<=n-1;j++){
         if (arr[i]==arr[j])
         {flag =false;}
         break;
    
    }
    }if(flag==false)cout<<"duplicate exists";}