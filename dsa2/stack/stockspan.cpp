#include<iostream>
#include<stack>
using namespace std;
int main()
{
stack<int> st;
 int arr[8]={100,80,60,81,70,60,75,85};
 int ans[8];
 st.push(0);
for(int i=0;i<8;i++)
{
    while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();
    if(st.size()==0)  ans[i]=-1;
    else ans[i]=st.top();//marking the ans
    st.push(i);//pushing into the stack
}
 ans[0]=-1;
 for(int i=0;i<8;i++){
    ans[i]=i-ans[i];
 }   
 for(int i=0;i<8;i++){
    cout<<ans[i];
 }
} 
