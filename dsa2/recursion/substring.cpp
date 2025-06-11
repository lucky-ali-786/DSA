#include<iostream>
#include<string>
using namespace std;
void sub(string s,string p,int i,int j,string ans)
   {
    if(j==p.length()){
        cout<<ans;
        return;
    }
    if(s[i]==p[i]){
        sub(s,p,i+1,j+1,ans+s[i]);
    }
    else {sub(s,p,i,j+1,ans);}

}
int main(){
   string s;
   string p;
    string ans="";
   cin>>s>>p;
    sub(s,p,0,0,ans);
}