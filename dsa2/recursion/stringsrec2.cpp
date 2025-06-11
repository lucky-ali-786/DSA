#include<iostream>
#include<vector>
using namespace std;
void reva(int arr[],vector<int> &v,int i)
{
  if(i==9) {
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return ;}
  if(arr[i]!=1){
    v.push_back(arr[i]);
  }
  reva(arr,v,i+1);
}
int main(){
   int arr[9]={2,1,2,1,3,5,3,5,1};
   vector<int> v;
    reva(arr,v,0);
} 