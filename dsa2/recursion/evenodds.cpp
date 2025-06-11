#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
vector <int> v;
if(n%2==0) {
        if(k>n/2){
        for(int i=0;i<n;i++){
        if((i+1)%2==0) v.push_back(i+1);
    }
     cout<<v[k-n/2-1];
    }
    else{
        for(int i=0;i<n;i++){
    if((i+1)%2!=0) v.push_back(i+1);
    }
    cout<<v[k-1];
    }
}
else{
    if(k>n/2+1){
    for(int i=0;i<n;i++){
    if((i+1)%2==0) v.push_back(i+1);
   }
     cout<<v[k-n/2-2];}
    else{
        for(int i=0;i<n;i++){
    if((i+1)%2!=0) v.push_back(i+1);
    }
    cout<<v[k-1];
    }
}
 
}