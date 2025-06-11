#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int b,y;
float a=1;
cin>>b;
if(b<0){y =1;
b=-b;}
for(int i=1;i<=b;i++)
{a=n*a;}

if(y==1){
    a=1/a;
}
if(n==0 && b==0)
{cout<<"not defined";}

else {cout<<a;}
}
