#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++)
{for(int j=1;j<=n-i;j++)
{cout<<"*";}
int nsp=1;
for(int k=1;k<=nsp;k++)
{cout<<" ";
}
nsp+=2;
for(int l=1;l<=n-i;l++)
{cout<<"*";}
cout<<endl;


}}



