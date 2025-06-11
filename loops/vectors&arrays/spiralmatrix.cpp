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
int maxr=n-1;
int maxc=n-1;
int minc=0;
int minr=0;
while(maxc>=minc&&maxr>=minr){
   for(int j=minc;j<=maxc;j++){//right jane ke liye
    cout<<arr[minr][j];}
    minr++;
   if(maxr<minr||maxc<minc)break;
   for(int k=minr;k<=maxr;k++){//down
    cout<<arr[k][maxc];}
    maxc--;
   if(maxr<minr||maxc<minc)break;
   for(int l=maxc;l>=minc;l--){//left
    cout<<arr[maxr][l];}
    maxr--;
   if(maxr<minr||maxc<minc)break;
   for(int m=maxr;m>=minr;m--){//up
    cout<<arr[m][minc];}
    minc++;
   
}
}