#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>=1){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{break;}
            j--;
        }
    }
    int a=0;
    int b=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            a=a*10+arr[i];
        }
        else{b=b*10+arr[i];}
    }
    cout<<a+b;


}