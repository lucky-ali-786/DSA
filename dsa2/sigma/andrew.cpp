#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int count1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') count++;
        else count1++;
    }
    int ans=count1-count;
    if(ans<0) ans*=-1;
    cout<<ans;
}