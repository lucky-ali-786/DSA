#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
   string s;
   cin>>s;
   string p="";
   sort(s.begin(),s.end());
   for(int i=0;i<s.length();i++){
    if(s[i]!='+') p+=s[i];
   }
   string res="";
   for(int i=0;i<p.length()-1;i++){
        res=res+p[i]+'+';
   }
   res+=p[p.length()-1];
   cout<<res;
}