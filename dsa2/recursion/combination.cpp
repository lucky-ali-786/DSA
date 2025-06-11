#include<iostream>
#include<vector>
#include<string>
using namespace std;
void comb(vector<int> v,int n,int arr[3],int j)
{
  if(n==0){
   for(int i=0;i<v.size();i++){
   cout<<v[i];
   }
   cout<<endl;
   return;
  }
  if(n<0) return ;
for(int i=j;i<3;i++){
    v.push_back(arr[i]);
    comb(v,n-arr[i],arr,i);
    v.pop_back();
}
}
int main(){
  int arr[]={2,3,5};
  int n;
  cin>>n;
  vector<int> v;
   comb(v,n,arr,0);
}