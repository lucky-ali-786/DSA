#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string s;
cin>>s;
int A=0;
int a=0;
for(int i=0;i<s.length();i++)
{
if(s[i]<97) A++;
else a++;
}
if(a==A){
    for (int i = 0; i < s.length(); i++)
    {
       if(s[i]<97) s[i]=s[i]+32;
    }
}
if(a<A){
     for (int i = 0; i < s.length(); i++)
    {
       if(s[i]>=97) s[i]=s[i]-32;
    }
}
if(a>A){
     for (int i = 0; i < s.length(); i++)
    {
       if(s[i]<97) s[i]=s[i]+32;
    }
}
cout<<s;
}