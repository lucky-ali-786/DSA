#include<iostream>
#include<vector>
using namespace std;
int main()   {
    int n;
   cin>>n;
   int x=n;
   int p;
   cin>>p;
   int arr[p];
   for(int i=0;i<p;i++){
    cin>>arr[i];
   }
   int q;
   cin>>q;
   int brr[q];
   for(int i=0;i<q;i++){
    cin>>brr[i];
   }
   int count=0;
  while(x>0){
    for(int j=0;j<p;j++){
        if(x==arr[j]) count++;
       
    }x--;}
    x=n;
     while(x>0){
    for(int j=0;j<p;j++){
        if(x==arr[j]&&arr[j]!=brr[j]) count++;
       
    }x--;}
    if(count==x) cout<<"i become the guy.";
   else{cout<<"Oh, my keyboard!";} 
  

       
    
   }