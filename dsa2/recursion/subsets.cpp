#include<iostream>
#include<vector>
using namespace std;
void subs(int i,string p,string s)
{int n=s.length();
   if(i==n){
    cout<<p<<endl;
    return;
   }
   subs(i+1,p+s[i],s);
   subs(i+1,p,s);

}
int main(){
  string s="aba";
  subs(0,"",s);
}