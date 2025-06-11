#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
   string s;
   string s1;
   getline(cin,s);
   for(int i=0;i<s.size();i++){
    if((int)(s[i])>=(int)('X')){
    s1.push_back(s[i]);
    }
   }
    for(int i=0;i<s.size()-1;i++){//optimisation
        bool flag=true;
        for(int j=0;j<s.size()-i;j++){
            if(s1[j]<s1[j+1]){
                int temp=s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true) break;
    }
   cout<<s1;
}