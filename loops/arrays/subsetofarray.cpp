#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
    void subset(string ans,string original){
    if(original==""){ 
        cout<<ans<<endl;
        return;}
    char ch=original[0];
    subset(ans+ch,original.substr(1));
    subset(ans,original.substr(1));
    
}
void subse(string ans,string original,int idx){
    if(original==""){ 
        cout<<ans<<endl;
        return;}
    char ch=original[0];
    subse(ans+ch,original.substr(idx),idx);
    subse(ans,original.substr(idx),idx);
    
}
void vextor(string ans,string original,vector<string> &v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    vextor(ans+ch,original.substr(1),v);
    vextor(ans,original.substr(1),v);


}

int main(){
    vector<string> v;
    vextor("","abca",v);
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
                v[i]="";
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
}}