#include<iostream>
#include<climits>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n][n];
for(int i=0;i<n;i++)//row do isko{
{
for(int j=0;j<n;j++){
    cin>>arr[i][j];
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++){
    if(i>j||j>i){
        int temp =arr[i][j];
        arr[i][j]=arr[j][i];//second method se bhi krlo
        arr[j][i]=temp;
    }
    }
}
for(int j=0;j<n;j++)//row do isko{
{
for(int i=0;i<n;i++){
    cout<<arr[i][j];
    }
    cout<<endl;
    
}

}