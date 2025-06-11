#include<iostream>
#include<vector>
using namespace std;
   int main() {
    int x;
    cin>>x;
    vector<string> s(x);
    for(int i=0;i<x;i++){
   cin>>s[i];
   }
   for(int i=0;i<x;i++){
     if(s[i].length()>10){
        string b=s[i];
     cout<<b[0]<<b.length()-2<<b[b.size()-1];
     cout<<endl;}
    else{cout<<s[i]<<endl;}
    
   }

    

   }