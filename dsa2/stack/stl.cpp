#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> st;
    st.push(9);
    st.push(8);
    st.push(6);
    st.push(7);
//printing full stack;
while(st.empty()!=1){
    cout<<st.top()<<endl;
    st.pop();
}


}