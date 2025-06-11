#include<iostream>
using namespace std;
int main(){
    int a=1;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        cout<<endl;
    }
    for(int j=0;j<=n-1;j++){
        a=a*arr[j];
   }
    cout<<a;
}