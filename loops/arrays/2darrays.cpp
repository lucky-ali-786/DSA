#include <iostream>
#include<climits>
using namespace std;
int main() {
int arr[4][2];
for(int i=0;i<4;i++)//row do isko{
{
for(int j=0;j<2;j++){
    cin>>arr[i][j];
    }
    cout<<endl;
    //column do isko;
}
int max =arr[0][0];
for(int i=0;i<4;i++)//row do isko{
{
for(int j=0;j<2;j++){
    if(max<arr[i][j]){
        max=arr[i][j];
    }
    }
}
int secondmax=arr[0][0];
for(int i=0;i<4;i++)//row do isko{
{
for(int j=0;j<2;j++){
    if(secondmax<arr[i][j]&&arr[i][j]!=max){
       secondmax=arr[i][j];
    }
    }
}

cout<<secondmax;}