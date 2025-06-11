#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
int k,n;
cin>>k>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
int i=0;
int j=k-1;
int len=0;
int minlen=INT_MAX;
//10 12 10 7 5 22
while(j<n){
    len= v[j]-v[i];
    minlen=min(len,minlen);
    i++;
    j++;
}
cout<<minlen;
}