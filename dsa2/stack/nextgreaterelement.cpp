#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> st;
int arr[]={1,3,4,7,90,90};
int ans[6];
//[10,6,8,5,11,9]
ans[5]=-1;
st.push(arr[5]);//pop ans push and reverse travel into the array
for(int i=4;i>=0;i--)
   {
    while(st.size()>0 && arr[st.top()]<=arr[i]) st.pop();
    if(st.size()!=0)ans[i]=st.top();//marking the ans
    else{
        ans[i]=6;
    }
    st.push(i);//pudhing into the stack
}

}