#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
int t;
cin>>t;
vector<string> l(2*t);
for(int i=0;i<2*t;i++){
cin>>l[i];
}
for(int i=0;i<2*t;i+=2){
    int count =0;
    int n=stoi(l[i]);
    string s=l[i+1];
vector <string> v(n);
for(int i=0;i<n;i++){
    string p=s;
    if(p[i]=='0') p[i]='1';
    else{
        p[i]='0';
    }
    v[i]=p;
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
{
if(v[i][j]=='1') count++;
}
}
cout<<count;
cout<<endl;
}

}