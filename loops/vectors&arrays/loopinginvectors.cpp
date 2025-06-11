#include<vector>
#include<iostream>
using namespace std;
int main(){
vector<int> v(6);
for(int i=0;i<=5;i++){
    cin>>v[i];
}
int x;
cin>>x;
int index =-1;
for(int j=0;j<=5;j++){
    if (v[j]%x==0)
    { index=j;}
    
}
cout<<index;}