#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,67,1,3,5,3};
    for(int i=0;i<6;i++){//optimisation
        bool flag=true;
        for(int j=0;j<6-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<7;i++){
        cout<<arr[i];
    }
}