#include<iostream>
using namespace std;
int main(){
int arr[]={2,2,2,2,3};
int n=5;
int b=0;
int a;
for(int i=0;i<n;i++){
    b^=arr[i];
}
if(b==arr[0]) a=arr[1];
else a=arr[0];
cout<<a<<b;
}