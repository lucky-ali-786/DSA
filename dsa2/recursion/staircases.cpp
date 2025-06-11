#include<iostream>
using namespace std;
int sta(int n)
{
if(n==1||n==2) return 1;
return sta(n-1)+sta(n-2);
}
int main(){
 int n;
 cin>>n;
 cout<<sta(n);
}