#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
#include<string>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int k=i;k<n;k++){
            for(int j=i;j<=k;j++){
                cout<<arr[j];
            }
            cout<<endl;
        }
    }
}