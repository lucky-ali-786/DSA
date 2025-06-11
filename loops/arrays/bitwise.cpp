#include<iostream>
#include<vector>
using namespace std;
   int main() {
    
    string s;
    cin>>s;
    int y=0;
   for(int i=0;i<26;i++){
    if(s[0]==(char)(i+65)) { 
         y=1;}
   }
   
    if(y==0){
        char ch=s[0];
        int x =(int) ch;
        char s2=(char)(x-32);
        s[0]=s2;
    }
    cout<<s;
   }