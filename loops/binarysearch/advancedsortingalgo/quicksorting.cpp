#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int part(int arr[],int si,int ei){
    int pivotindex=arr[(si+ei)/2];
    int count=0;
    for(int i=si;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(pivotindex>=arr[i]) count++;}
    int idx=count+si;
    swap(arr[idx],arr[(si+ei)/2]);
    int i=si;
    int j=ei;
    while(i<idx && j>idx){
        if(arr[i]<pivotindex) i++;
        if(arr[j]>pivotindex)  j--;
        else if(arr[i]>pivotindex && arr[j]<pivotindex){
            swap(arr[i],arr[j]);
            j--;
            i++;}}
        return idx;}
void quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi=part(arr,si,ei);
     quicksort(arr,0,pi-1);
     quicksort(arr,pi+1,ei);}
int main(){
    int arr[]={3,5,2,5,5,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
}}