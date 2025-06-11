#include<iostream>
using namespace std;
void lower(int target,int arr[]){
    int lo=0;
    int hi=7;
    while(lo<=hi){
        int mid=lo +(hi-lo)/2;
        if(arr[mid]==target) {cout<<arr[mid-1];
           break; }
        if(arr[mid]<target) lo=mid+1;
        if(arr[mid]>target){ hi=mid-1;
        }
           }
         cout<<arr[hi];


    }
    
int main(){
    int arr[]={2,5,6,8,9,34,67,89};
    int target=68;
    lower(target,arr);
     

   


}