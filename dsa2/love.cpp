#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1) cout<<0;
    else {
    int count=0;
    int s=arr[0];
    int p=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>s){
                s=arr[i];
                count++;
            }
            if(arr[i]<p) {
                p=arr[i];
                count++;
            }
        }
        cout<<count;
    }

}