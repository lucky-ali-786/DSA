#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> st;
int arr[8]={3,1,2,5,4,6,4,3};
int ans[8];
ans[0]=-1;
st.push(arr[0]);//pop ans push and travel into the array
for(int i=1;i<8;i++){
    while(st.size()>0 && st.top()<=arr[i]) st.pop();
      if(st.size()==0)  ans[i]=-1;
    else ans[i]=st.top();//marking the ans
    st.push(arr[i]);//pushing into the stack
}
for(int i=0;i<=7;i++){
    cout<<ans[i];
}
}