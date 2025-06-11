#include<iostream>
using namespace std;
void display(int a[], int size){
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";

    }
}
void change(int b[], int size){
    b[0]=1000;
}
int main(){
int arr[]={2,3,45,3,5,3,5};
int size=sizeof(arr)/sizeof(arr[0]);
display(arr,size);
change(arr,size);
cout<<endl;
display(arr,size);
}