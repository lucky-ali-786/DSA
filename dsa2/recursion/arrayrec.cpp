#include<iostream>
using namespace std;
int maxrec(int i,int arr[],int n,int max){
    if(i==n) return max;
    if(max<arr[i]) max=arr[i];
    return maxrec(i+1,arr,n,max);
}
int main(){
  int arr[]={2,5,2,5,2,6,9,76};
  int max=0;
 cout<<maxrec(0,arr,8,max);
}