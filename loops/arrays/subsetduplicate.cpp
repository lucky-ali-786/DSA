#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
void vextor(string ans,string original,vector<string> &v,bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    if(original.size()==1){
      vextor(ans,original.substr(1),v,true);
     if(flag==true)vextor(ans+ch,original.substr(1),v,true);
     return;
    }
    char dh =original[1];
    if(dh==ch){
    vextor(ans,original.substr(1),v,false);
    vextor(ans+ch,original.substr(1),v,true); }
    else{
    if(flag==true)vextor(ans+ch,original.substr(1),v,true);
    vextor(ans,original.substr(1),v,true); }
    }
int main(){
vector<string>  v;
bool flag=true;
vextor("","aab",v,flag);
for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
}}