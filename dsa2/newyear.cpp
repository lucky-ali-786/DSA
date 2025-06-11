#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int p=240-k;
    int count=0;
    if(p<5) cout<<count;
    else{
        for(int i=1;i<=n;i++)
        {int ans=0;
             ans+=5*i;
            if(p-ans>=0) count++;
            p-=ans;
        }
cout<<count;
    }
}