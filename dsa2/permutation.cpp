#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void permu(string s,string p,vector<int> &v)
{if(s.length()==0) {
   int x=stoi(p);
   int sum=0;
    for(int i=p.length()-1;i>=0;i--){
     int p=x%10;
        sum+=p-(i+1);
        if(sum<0) sum*=-1;
        x/=10;
    }
    v.push_back(sum);
    return;
}
for(int i=0;i<s.length();i++){
   char ch =s[i];
   string left=s.substr(0,i);
   string right=s.substr(i+1);
   permu(left+right,p+ch,v);
}
}
int main(){
 int n;
 cin>>n;
vector<int> l(n);
for(int i=0;i<n;i++){
cin>>l[i];
}
for(int i=0;i<n;i++){
    int count=0;
    string s="";
    for(int j=0;j<l[i];j++){
        string p=to_string(j+1);
      s+=p;
    }
 vector<int> v;
 permu(s,"",v);
 sort(v.begin(),v.end());
 for(int i=0;i<v.size()-1;i++){
if(v[i]==v[i+1]) count++;
 }
 cout<<v.size()-count;
cout<<endl;
}
}

   