#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
string s;
int n;
cin>>n;
cin>>s;
int x=0;
for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]) x++;
}
cout<<x;
}