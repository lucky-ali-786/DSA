#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    int p=0;
    int arr[n][2];
    for(int i=0;i<n;i++){
           for(int j=0;j<2;j++){
            cin>>arr[i][j];
           }
    }
   for(int i=0;i<n;i++){
    s=arr[i][0]%arr[i][1];
    if(s==0) s=arr[i][1];
    p=arr[i][1]-s;
    cout<<p<<endl;
   }
        
}