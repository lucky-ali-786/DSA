#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ct=0;
    for(int i=0;i<m;i++){
       if(v[i]<0) ct+=v[i];
    }
    cout<<-1*ct;
}