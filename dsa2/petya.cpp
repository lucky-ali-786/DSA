#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
   string s;
   string p;
   cin>>s>>p;
   int t=0;
   for(int i=0;i<s.length();i++){
    if(tolower(s[i])>tolower(p[i])) {
        cout<<1;
        break;
    }
    else if(tolower(s[i])<tolower(p[i])){
        cout<<-1;
        break;
    }
    else{
        t++;
    }
   }
if(t==s.length()) cout<<0;


}