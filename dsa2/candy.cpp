#include<iostream>
#include<vector>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    string l;
    cin>>l;
    string p;
    if(ch=='R'){
        for(int i=0;i<l.length();i++){
            char d=l[i];
            for(int i=1;i<s.length();i++){
                if(d==s[i]) {
                    p=p+s[i-1];
                }
            }
        }
    }

    else{
       for(int i=0;i<l.length();i++){
            char d=l[i];
            for(int i=0;i<s.length();i++){
                if(d==s[i]) {
                    p=p+s[i+1];
                }
            }
        } 
    }
cout<<p;
}