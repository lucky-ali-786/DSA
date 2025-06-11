#include<iostream>
using namespace std;
int main(){
    int x=0;
    int arr[]={2,4,67,1,3,5,3};
    for(int i=0;i<6;i++){
        int min =arr[i];
        for(int j=i;j<7;j++){
           if(min>arr[j]) {min=arr[j];
              x=j; }
        }
       int temp=arr[x];
       arr[x]=arr[i];
       arr[i]=temp;
    }
    for(int i=0;i<7;i++){
        cout<<arr[i];
    }
}