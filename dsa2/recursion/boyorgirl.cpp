#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()   {
   string s;
   cin>>s;
   int p=0;
 int n=s.length();
 sort(s.begin(),s.end());
for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]) p++;
}
if((n-p)%2==0) cout<<"CHAT WITH HER!";
else cout<<"IGNORE HIM!";
}




















   }
