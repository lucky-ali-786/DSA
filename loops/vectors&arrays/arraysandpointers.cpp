#include<iostream>
using namespace std;

int main(){
int arr[]={2,3,45,3,5,3,5};
int *ptr=arr;
for(int i=0 ;i<=6;i++){
cout<<i[ptr]<<" ";
}
ptr =arr;
*ptr= 43;
ptr++;
*ptr =67;
ptr--;
}