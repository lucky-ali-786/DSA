#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
//5009//9876
int n;
cin>>n;
vector<int> q(n);
for(int i=0;i<n;i++){
    cin>>q[i];
}
for(int i=0;i<n;i++)
{
vector<int> v;
int sub;
int p=q[i];
int tn=1;
int m=10;
bool flag=true;
while(p>0){
    p/=10;
    tn*=10;
}
tn/=10;
if(q[i]%tn==0){ v.push_back(q[i]);
flag=false;}
tn=1;
p=q[i];
if(flag==true){
while(p>0){
sub=p%m;
p=p-sub;
int s=sub;
while (sub>0)
{   
   sub/=10;
   tn*=10;
}
tn/=10;
if(s%tn==0) v.push_back(s); 
tn =1;
sub=p;
int o=sub;
while (sub>0)
{
   sub/=10;
   tn*=10;
}
tn/=10;
if(o%tn==0){
    v.push_back(o); 
break;}
tn=1;
m*=10;
}}
cout<<v.size()<<endl;
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
}
}