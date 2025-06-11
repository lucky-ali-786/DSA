#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> st;
    st.push(9);
    st.push(8);
    st.push(6);
    st.push(7);
//adding to the bottom full stack;
stack<int>temp;
int idx=2;
while(st.size()!=idx){
    temp.push(st.top());
    st.pop();
}
st.push(70);
while(temp.size()){
   st.push(temp.top());
   temp.pop();
}
while(st.size()){
    cout<<st.top()<<endl;
    st.pop();
}
}