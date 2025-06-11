#include<iostream>
#include<vector>
using namespace std;
int pie(vector<int> &brr,int curridx,int n,int x){
    
    if(curridx==n){
    return -1 ;} 
   if(brr[curridx]==x){
    cout<<x;
   }
   return pie(brr,curridx+1,n,x);
}
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pie(arr,0,n,x);
}