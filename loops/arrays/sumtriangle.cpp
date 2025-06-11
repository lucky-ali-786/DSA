#include<iostream>
#include<vector>
using namespace std;
void pie(vector<int> &brr,int n){
    
    if(n==0){
    return  ;} 
    vector<int> temp(n-1);
    for(int i=0;i<n;i++){
        cout<<brr[i]<<" ";
        if(i!=0)temp[i-1]=brr[i-1]+brr[i];
    }
     cout<<endl;
     pie(temp,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pie(arr,n);
}