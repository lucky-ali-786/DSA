#include<iostream>
using namespace std;
int low(int target,int arr[]){
    int lo=0;
    int hi=9;
    while(lo<=hi){
        int mid=lo +(hi-lo)/2;
        if(arr[mid]==target) { if(arr[mid-1]==target) hi=mid-1;
            else{cout<<mid;
            break;}
            }
        if(arr[mid]<target) lo=mid+1;
        if(arr[mid]>target){ hi=mid-1;
        }
           }

    }
    
int main(){
    int arr[]={2,5,5,6,6,6,34,34,67,89};
    int target=5;
    low(target,arr);
     

   


}