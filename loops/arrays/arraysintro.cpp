#include<iostream>
using namespace std;
int main(){
    int a=0;


    int arr[6];
    for(int i=0;i<=5;i++){
        cin>>arr[i];
        cout<<endl;
    }
    for(int j=0;j<=5;j++){
        a=a+arr[j];

    }
    cout<<a;
}