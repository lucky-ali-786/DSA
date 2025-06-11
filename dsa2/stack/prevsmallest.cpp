#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> st;
int arr[]={1,1};
int ans[2];
ans[0]=-1;
st.push(1);//pop ans push and reverse travel into the array
for(int i=0;i<2;i++){
    while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
    if(st.size()!=0)ans[i]=st.top();//marking the ans
    else{
        ans[i]=-1;
    }
    st.push(i);//pudhing into the stack
}
for(int i=0;i<=1;i++){
    cout<<ans[i];
}
}