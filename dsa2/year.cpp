#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
   int n,a,b,c,d,ans;
   cin>>n;
   while(1){
    n++;
    ans=n;
    a=n%10;
    n/=10;
    b=n%10;
     n/=10;
     c=n%10;
      n/=10;
      d=n%10;
    n=ans;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        cout<<ans;
        break;
    }
   }
}