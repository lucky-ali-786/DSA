#include<iostream>
using namespace std;
// void poki(string ans,string str){
//     if(str.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch=str[0];
//     if(ch=='u'){
//         poki(ans,str.substr(1));
//     }
//     else{poki(ans+ch,str.substr(1));}
    
// } 
void poki(string ans,string str,int idx){
    if(idx==str.length()){
        cout<<ans;
        return;
    }
    char ch=str[idx];
    if(ch=='u'){
        poki(ans,str,idx+1);
    }
    else{poki(ans+ch,str,idx+1);}
    
} 
int main(){
    string b="luckyalu";
    poki("",b,0);
}