#include<iostream>
#include<vector>
using namespace std;
int main()
{
long long int n,k;
cin>>n>>k;
long long int ans;
long long int j=k-n/2-1;
if(n%2!=0){
    if(k<=(n/2)+1) ans=2*k-1;
    else{
        ans=2*j;
    }
}
else{
    j++;
    if(k<=n/2) ans=2*k-1;
    else{
        ans=2*j;
    }
}
cout<<ans;
}