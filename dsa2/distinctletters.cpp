#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{string s;
getline(cin,s);
string p="";
int k=0;
for(int i=0;i<s.length();i++){
    if(s[i]==' '||s[i]==','||s[i]=='}'||s[i]=='{'){
       continue;
    }
    else{
        p+=s[i];
}
}
if(p=="") cout<<0;
else{
sort(p.begin(),p.end());
for(int i=0;i<p.length()-1;i++){
    if(p[i]==p[i+1]) k++;
}
cout<<p.length()-k;
}
}