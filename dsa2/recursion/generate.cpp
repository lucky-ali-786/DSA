#include<iostream>
#include<vector>
#include<string>
using namespace std;
void gen(string s,int n,int c,int o)
{  
    if(c==n){
        cout<<s;
        cout<<endl;
        return;
    }
  if(c<o) gen(s+')',n,c+1,o);
  if(o<n) gen(s+'(',n,c,o+1);
}
int main(){
    string s="";
    int n;
    cin>>n;
 gen(s,n,0,0);
}