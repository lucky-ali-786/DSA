#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
    void subset(string ans,string original){
        if(original==""){
            cout<<ans<<endl;
            return;
        }
        for(int i=0;i<original.length();i++){
            char ch=original[i];
            string left= original.substr(0,i);
            string right= original.substr(i+1);
            subset(ans+ch,left+right);  
        }

    } 
int main(){
    subset("","abc");
    }
    