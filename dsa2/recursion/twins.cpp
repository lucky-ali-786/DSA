#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
int sum1=0;
int sum2=0;
for(int i=0;i<n;i++){
    sum1+=v[i];
}
int count=1;
for(int i=0;i<n;i++){
    sum2+=v[i];
    sum1-=v[i];
    if(sum2>sum1){
        break;
    }
    count++;
}
cout<<count;
}