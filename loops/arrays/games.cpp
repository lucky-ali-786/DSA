#include<iostream>
#include<vector>
#include<string>
using namespace std;
   int main() {
    string s;
    cin>>s;
    int count=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
        if(s[i]==s[j]){
                count++;
            }
        }
    } 
    if(count>=1) count-1;
    int hero = n-count ;
    if(hero%2==0)cout<<"CHAT WITH HER!";
    else{cout<<"IGNORE HIM!";}
   }