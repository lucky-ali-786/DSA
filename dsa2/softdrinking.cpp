#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=k*l/nl;
    int limes=c*d;
    int salt=p/np;
    int ans=min(drink,limes);
    int ans2=min(ans,salt);
    cout<<(ans2/n);



}