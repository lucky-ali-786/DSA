#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int> v;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='B'&& i!=n-1){
            v.push_back(i);
        } 
    }
    while(t--){
    for(int j=0;j<v.size();j++){
        if(s[v[j]+1]=='G') { swap(s[v[j]],s[v[j]+1]);
        }
    }
    v.pop_back();
    for(int i=0;i<n;i++){
        if(s[i]=='B'&& i!=(n-1)){
            v.push_back(i);
        } 
    }
    }
    cout<<s;
}