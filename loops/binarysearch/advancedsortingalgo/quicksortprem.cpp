#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int partidx(int arr[],int si,int ei){
    int pivot=si;
    int i=si;
    int j=ei;
    while(i<j){
        while(arr[i]<=arr[pivot]&&i<ei){
            i++;
        }
        while(arr[j]>arr[pivot]&&j>si){
            j--;
        }
        
    }
    if(i<j) swap(arr[i],arr[j]);
    swap(arr[si],arr[j]);
 return j;

}
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi=partidx(arr,si,ei);
     quicksort(arr,0,pi-1);
     quicksort(arr,pi+1,ei);}
int main(){
    int arr[]={3,5,2,5,5,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
}}