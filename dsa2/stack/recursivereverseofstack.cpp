#include<iostream>
#include<stack>
using namespace std;
void pri(stack<int>&st){
if(st.size()==0){
    return;
}
//reverse printing of stack
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
    pri(st);

}