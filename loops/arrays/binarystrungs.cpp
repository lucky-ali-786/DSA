#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void binary (string s,int n){
    if(s.length()==2){
        cout<<s<<endl;
        return; 
    }
    binary(s+'0',n);
    if(s.length()==0) binary(s+'1',n);
    else if(s[s.length()-1]=='0'){
        binary(s+'1',n);
    }
}
int main()
{
    
   binary("",2);
}