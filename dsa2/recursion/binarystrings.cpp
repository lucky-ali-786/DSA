#include<iostream>
#include<vector>
#include<string>
using namespace std;
void bino(string s,int n)
{  
   if(s.length()==n){
    cout<<s<<endl;
    return;
   } 
   if(s.length()==0){
    bino(s+'1',n);
    bino(s+'0',n);
   }
   else {
    if(s[s.length()-1]!='1') bino(s+'1',n);
   bino(s+'0',n);}
}
int main(){
    string s="";
    int n;
    cin>>n;
 bino(s,n);
}