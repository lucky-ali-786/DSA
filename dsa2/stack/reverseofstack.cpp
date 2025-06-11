#include<iostream>
#include<stack>
using namespace std;
void pushatbottom(int val,stack<int> &st){
if(st.size()==0){
    st.push(val);
    return;
}
int x=st.top();
st.pop();
pushatbottom(val,st);
st.push(x);
}
void pri(stack<int>&st){
if(st.size()==0){
    return;
}
int x=st.top();
st.pop();
pri(st);
cout<<x;
st.push(x);
}
void reverse(stack<int> &st){
if(st.size()==1){
    return ;
}
int x=st.top();
st.pop();
reverse(st);
pushatbottom(x,st);
}
int main(){
    stack <int> st;
    st.push(9);
    st.push(8);
    st.push(6);
    st.push(7);
pushatbottom(40,st);
pri(st);
reverse(st);
cout<<endl;
pri(st);
}