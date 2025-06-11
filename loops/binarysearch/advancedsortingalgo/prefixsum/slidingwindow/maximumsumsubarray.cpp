#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    int maxs=INT_MIN;
   int maxidx=-1;
   int prevsum =0;
   int i;
   for( i=0;i<k;i++){
    prevsum+=arr[i];
   }
   i=1;
   int j=k;
   int currsum=0;
   while(j<n){
    currsum=prevsum-arr[i-1]+arr[j];
    if(maxs<currsum){ maxs=currsum;
    maxidx=i;}
        prevsum=currsum;
        i++;
        j++;
   }
   cout<<maxs;


}