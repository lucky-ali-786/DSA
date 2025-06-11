#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> v1(n);
    for(int i=0;i<n;i++){
    cin>>v1[i];
}
int b=0;
  int max=stoi(v1[0]);
  for(int j=0;j<n;j++){
    if(max<stoi(v1[j])) {max=stoi(v1[j]);
     b=j;}
  }
    cout<<b;
}