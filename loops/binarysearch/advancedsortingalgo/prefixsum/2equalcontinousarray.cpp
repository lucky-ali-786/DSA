#include<iostream>
using namespace  std;
int main(){
    int arr[]={4,543,56,3,5,3,5,};
    //prefix sum
    //best methog
    for(int i=1;i<7;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    bool flag=true;
    for(int i=0;i<7;i++)
   if(arr[i]==arr[6]/2){
    flag=false;
    break;
   }
   if(flag==false) cout<<true;
   else cout<<false;
}