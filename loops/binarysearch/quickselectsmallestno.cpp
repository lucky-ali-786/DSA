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
    while(i<idx&&j>idx){
        if(arr[i]<pivotindex) i++;
        if(arr[j]>pivotindex)  j--;
        else if(arr[i]>pivotindex&&arr[j]<pivotindex){
            swap(arr[i],arr[j]);
            j--;
            i++;}}
        return idx;}
int quicksort(int arr[],int si,int ei,int k){
    int pi=part(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1>k)  quicksort(arr,0,pi-1,k);
    else quicksort(arr,pi+1,ei,k);}
int main(){
    int arr[]={4,5,24,98};
    int n=sizeof(arr)/sizeof(arr[0]);
    int b=quicksort(arr,0,n-1,k);
    int k=4;
    cout<<quicksort(arr,0,n-1,k);
    }