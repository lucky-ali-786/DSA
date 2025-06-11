#include<iostream>
#include<string>
using namespace std;
void pal(string p,string s,int i){
    if(i==s.length()){
      if(s==p) cout<<true;
      else cout<<false;
      return;
    }
    pal(p+s[s.length()-i-1],s,i+1);
}
int main(){
    string s;
    cin>>s;
    pal("",s,0);
}