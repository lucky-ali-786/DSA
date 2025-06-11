#include<iostream>
using namespace std;
string countsay(int n)
{
if(n==1) return "1";
string s=countsay(n-1);
string p="";
int freq=1;
char ch=s[0];
for(int i=0;i<s.length();i++){
    if(s[i]==ch){
        freq++;
    }
    else{
        p+=(to_string(freq))+(ch);
        freq=1;
        ch=s[i];
    }
}
   p+=(to_string(freq))+(ch);
return p;
}
int main(){
    int n;
    cin>>n;
    cout<<countsay(n);
}