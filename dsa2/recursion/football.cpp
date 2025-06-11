#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.length();
int count=0;
bool flag=true;
for(int i=0;i<n;i++){
    count=0;
    for(int j=i+1;j<n;i++){
        if(s[i]==s[j]) count++;
        else break;
    }
    if(count>=7) {cout<<"YES";
        flag=false;
    break;}
}
if(flag==true) cout<<"NO";
}