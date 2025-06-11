#include<iostream>
#include<vector>
using namespace std;
void subs(int i,vector<int> v,int arr[3])
{
   if(i==3){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
   }
   subs(i+1,v,arr);
    v.push_back(arr[i]);
    if(arr[i]==v[v.size()-1]) subs(i+1,v,arr);
}
int main(){
 vector<int> v;
 int arr[]={2,4,3};
 subs(0,v,arr);
}