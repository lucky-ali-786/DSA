#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,9};
    int lo=0;
    int hi=7;
    int ans;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid) lo=mid+1;
        if(arr[mid]!=mid) {ans=mid;
        hi=mid-1;}}
     cout<<ans;}