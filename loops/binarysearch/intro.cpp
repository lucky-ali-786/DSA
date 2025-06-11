#include<iostream>
using namespace std;
int main(){
    int arr[]={2,5,6,8,9,34,67,89};
    int target=67;
    int lo=0;
    int hi=7;
    while(lo<=hi){
        int mid=(hi+lo)/2;
        if(arr[mid]==target) return mid;
        if(arr[mid]>target) hi=mid-1;
        if(arr[mid]<target) lo=mid+1;

    }
}