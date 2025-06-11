#include<iostream>
#include<stack>
using namespace std;
bool balanced(string s,stack<char> &st){
if(s.length()%2!=0) return false;
else{
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') {
            st.push(s[i]);
        }
        else{
            if(st.top()=='(')
            {
                st.pop();
            }
        }
    }
}
if(st.size()==0) return true;
else return false;
}
int main(){
stack<char> st;
string s;
cin>>s;
cout<<balanced(s,st);
}