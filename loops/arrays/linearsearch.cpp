#include<iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
       int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"enter the number to be searched";
    cin>>x;
    bool flag=true;
    for(int j=0;j<=n-1;j++){
        if(arr[j]%x==0){
            flag=false;
        }
        }
    if(flag==true){
        cout<<"the element not found"; }
        else{cout<<"the element is there in the array";}
}