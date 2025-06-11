#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    string p;
    string a;
    cin>>s>>p>>a;
    s+=p;
    int t=0;
    sort(s.begin(),s.end());
    sort(a.begin(),a.end());
if(s.length()==a.length()){
    for(int i=0;i<s.length();i++){
        if(s[i]==a[i]){
            t++;
        }
    else {
    cout<<"NO";
    break;}
}
    }
    if(t==s.length()) cout<<"YES";
if(a.length()>s.length()||s.length()>a.length())
{
cout<<"NO";
}
}