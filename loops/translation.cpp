#include<iostream>
#include<vector>
#include<string>
using namespace std;
   int main() {
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    int count=0;
    int n=s.length();
    int m=s1.length();
    if(m>n||n>m) cout<<"NO";
   else{ for (int i=0;i<n;i++)
    {if(s[n-i-1]==s1[i]){
        count++;
      }
    }
    if(count==n){
        cout<<"YES";

    }
    else{cout<<"NO";}}

   }