#include<iostream>
#include<vector>
#include<string>
using namespace std;
   int main() {
    int k,n,w;
    cin>>k>>n>>w;
    int sum = k*w*(w+1)/2;
    if(sum<=n) cout<<0;
   else{ cout<<sum-n;}

   }