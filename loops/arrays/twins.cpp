#include<iostream>
#include<vector>
using namespace std;
int main()   {
    int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int sum=0;
   for(int i=0;i<n;i++){
    sum+=arr[i];
   }
   int count=0;
   int sum1=0;
   for(int i=0;i<n;i++){
    sum1+=arr[i];
    sum-=arr[i];
    if(sum1>sum){ count=count+i+1;
        break;}
    
   }
   cout<<count;

   }