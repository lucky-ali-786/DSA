 #include<iostream>
#include<vector>
using namespace std;
int main()   {
    int n;
   cin>>n;
   int k;
   cin>>k;
   int v[n];
    v[0]=1;
    int j=1;
   for(int i=3;i<n;i++){
    if(k>n/2){
        j= n/2;
        break;
    }
   if(i%2!=0){ 
      v[j]=i;
      j++; }}
    
    int p=j;
    if(n%2==0) v[n-1]=n;
    else{v[n-1]=n-1;}
    
   for(int i=1;i<n;i++){
    if(k<n/2) break;
   if(i%2==0){ 
      v[p]=i;
      p++; }}
      cout<<v[k-1];
   

   }