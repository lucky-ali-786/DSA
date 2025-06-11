#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void subs(int i,vector<int> v,vector<int> &c,int k,int &ans)
{
   if(i==c.size()){
    if(v.size()==k){
        int amax=INT_MIN;
        int amin=INT_MAX;
        for(int i=0;i<k;i++){
            amax=max(amax,v[i]);
            amin=min(amin,v[i]);
        }
        int l=amax-amin;
        ans=min(l,ans);
   }
    return;
   }
   subs(i+1,v,c,k,ans);
   v.push_back(c[i]);
   subs(i+1,v,c,k,ans);
}
int main(){
 vector<int> v;
int  k,n;
cin>>k>>n;
vector<int> c(n);
for(int i=0;i<n;i++){
   cin>>c[i];
}
int ans=INT_MAX;
 subs(0,v,c,k,ans);
 cout<<ans;
}