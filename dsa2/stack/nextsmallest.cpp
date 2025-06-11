#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> st;
int arr[]={2,1,5,6,2,3};
int ans[6];
ans[5]=5;
st.push(5);//pop ans push and reverse travel into the array
for(int i=4;i>=0;i--){
    while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
    if(st.size()!=0)ans[i]=st.top();//marking the ans
    else{
        ans[i]=5;
    }
    st.push(i);//pudhing into the stack
}
for(int i=0;i<=5;i++){
    cout<<ans[i];
}
}