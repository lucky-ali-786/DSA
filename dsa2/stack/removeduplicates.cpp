#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<char> st;
string s;
cin>>s;
st.push(s[0]);
for(int i=1;i<s.length();i++)
{
if(st.top()!=s[i]){
   st.push(s[i]);
}
}
s="";
while(st.size()){
    s=st.top()+s;
    st.pop();
}
cout<<s;
}