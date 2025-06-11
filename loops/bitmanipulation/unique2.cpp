#include<iostream>
using namespace std;
int main(){
int arr[]={1,1,2,2,3,5};
int n=6;
int res=0;
int k=0;
for(int i=0;i<n;i++) res=res^arr[i];
int temp=res;
while(true){
    if(temp&1==1) break;
    temp = temp>>1;
    k++;
}
int resval=0;
for(int i=0;i<n;i++){
    if((arr[i]>>k)&1==1) resval=arr[i];
}
cout<<resval;
cout<<(resval^res);
}