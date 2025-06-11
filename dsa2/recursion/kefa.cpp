#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++)
{    
    cin>>v[i];
}
int len=1;
int maxlen=-1;
for(int i=1;i<n;i++){
    if(v[i]>=v[i-1]){
        len++;
    }
    else{
        maxlen=max(maxlen,len);
        len=1;
    }
}
 maxlen=max(maxlen,len);

cout<<maxlen;
 }
   
  

