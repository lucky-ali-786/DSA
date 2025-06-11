#include<iostream>
#include<vector>
#include<string>
using namespace std;
   int main() {
    int n;
    cin>>n;

    string s;
    s =to_string(n);
    cout<<s;
    
    for(int i=0;i<s.length();i++){
    int count =0;
    for(int j=i+1;j<s.length();j++){
        if(s[i]==s[j])  { n++;
        s=to_string(n);
        break;}
    }
      
    }
    
   }