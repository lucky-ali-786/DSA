#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
#include<string>
using namespace std;
void subset(int arr[],vector<int> v,int n,int idx){
    if(idx==n){ 
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;
        return;}
    //if(v.size()+(n-idx)<k);//kab call krna hai aur kab nhi.
    subset(arr,v,n,idx+1);
    if(v.size()==0||arr[idx-1]==v[v.size()-1]){
         v.push_back(arr[idx]);
    subset(arr,v,n,idx+1);
    }
    
    
}
int main(){
    vector<int> v;
    int k=3;
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    subset(arr,v,n,0);}