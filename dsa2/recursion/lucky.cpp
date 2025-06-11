#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()   {
   string s;
   cin>>s;
   string p;
   cin>>p;
   int t=0;
   bool flag=true;
   for(int i=0;i<s.length();i++){
   int sum=s[i]-p[i];
    t=sum;
   if(sum<0 && sum!=-32) {cout<<-1;
    
    flag=false;
    break;}
    if(sum>0 && sum!=32) {
        cout<<1;
        flag=false;
        break;
    }
    }
    if(t==0 || t==32||t==-32 && flag==true) cout<<0;
   }


