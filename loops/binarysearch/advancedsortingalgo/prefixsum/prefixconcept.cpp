#include<iostream>
using namespace  std;
int main(){
    int arr[]={4,543,56,3,5,3,5,};
    //prefix sum
    //best method
    for(int i=1;i<7;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;
    }
}