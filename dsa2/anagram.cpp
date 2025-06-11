#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int t=0;
string s;
cin>>s;
bool flag=true;
if(n<26) {
cout<<"NO";
flag=false;
}
string p="";
if(flag==true){
for(int i=0;i<n;i++){
if(s[i]<97){
  char ch= char(s[i]+32);
  p+=ch;
}
else{
   p+=s[i];
}
}
sort(p.begin(),p.end());
for(int i=0;i<n-1;i++){
   if(p[i]==p[i+1]) t++;
}
if((n-t)==26) cout<<"YES";
else cout<<"NO";
}
}

















