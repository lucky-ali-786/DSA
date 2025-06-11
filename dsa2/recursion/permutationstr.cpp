#include<iostream>
#include<vector>
#include<string>
using namespace std;
void permu(string s,string p)
{if(s.length()==0) {
   cout<<p<<endl;
   return;
}
for(int i=0;i<s.length();i++){
   char ch =s[i];
   string left=s.substr(0,i);
   string right=s.substr(i+1);
   permu(left+right,p+ch);
}

}
int main(){
 string s="abc";
 permu(s,"");
}