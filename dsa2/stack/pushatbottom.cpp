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
cout<<x<<endl;
st.push(x);
}
int main(){
    stack <int> st;
    st.push(9);
    st.push(8);
    st.push(6);
    st.push(7);
pushatbottom(40,st);
pri(st);
}