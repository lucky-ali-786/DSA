#include<iostream>
using namespace std;
void binary(string s,int n){
   if(n==0){
   cout<<s; 
   return;
   }
   if(n%2==0){
    s="0"+s;
   }
   else{
    s="1"+s;
   }
   binary(s,n/2);
}
int main(){
    int n;
    cin>>n;
    string s="";
   binary(s,n);
}