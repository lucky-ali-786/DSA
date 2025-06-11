#include<iostream>
#include<vector>
using namespace std;
int main()
{   vector<int> v;
    int n;
    int p,q;
    cin>>n;
 int prr[n];
 cin>>p;
  vector<int> arr(p);
 for(int i=0;i<p;i++){
    cin>>arr[i];
 }
 cin>>q;
 vector<int> brr(q);
  for(int i=0;i<q;i++){
    cin>>brr[i];
 }
for(int i=0;i<p;i++){
    v.push_back(arr[i]);}
for(int i=0;i<q;i++){
    v.push_back(brr[i]);
}
int t=0;
for(int i=0;i<n;i++){
    prr[i]=i+1;
}
for(int i=0;i<n;i++)
{for(int j=0;j<v.size();j++){
    if(prr[i]==v[j]){
       t++;
        break;
    }
}
}
if(t==n) cout<<"I become the guy.";
else cout<<"Oh, my keyboard!";
}