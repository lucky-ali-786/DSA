#include<iostream>
using namespace std;
int main() {
    int arr[]={2,4,67,1,3,5,3};
    for(int i=1;i<=6;i++){
        int j=i;
       while(j>=1){
        if(arr[j]<arr[j-1]) {swap(arr[j],arr[j-1]);}
        else break;
        j--;}}
    for(int i=0;i<7;i++){
    cout<<arr[i];
    }
}