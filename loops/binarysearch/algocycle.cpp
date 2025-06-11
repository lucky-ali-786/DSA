#include<iostream>
using namespace std;
int main()
{   
    int arr[]={4,5,2,3,1};
    int i=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    while(i<n){
    int corridx=arr[i]-1;
    if(i==corridx) i++;
    else swap(arr[i],arr[corridx]);
    }
    for(int i=0;i<n;i++){
    cout<<arr[i];
}
}
