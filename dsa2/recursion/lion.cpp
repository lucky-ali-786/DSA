#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=stoi(s);
    if(n>0) cout<<n;
    else
        {
        if(s[s.length()-1]=='0'){
            string p=s.substr(0,s.length()-2)+s[s.length()-1];
             cout<<stoi(p);
        }
        else{
            if(s[s.length()-1]>s[s.length()-2]){
            string l=s.substr(0,s.length()-1);
            cout<<stoi(l);}
            else{
            string l=s.substr(0,s.length()-2)+s[s.length()-1];
            cout<<stoi(l);
            }

        }
        }
}