#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    string p;
    string t="";
    cin>>s>>p; 
    for(int i=0;i<s.length();i++){
        if(s[i]==p[i]){
           t=t+"0";
        }
        else{
           t+="1";
        }
    }
    cout<<t;
}