#include<stdio.h>
int main(){
int arr[]={4,6,3,5,3,5};
int i=0;
int j=5;
while(i<j){
    arr[i]=arr[i]+arr[j];
    arr[j]=arr[i]-arr[j];
    arr[i]=arr[i]-arr[j];
    j--;
    i++;
}
int k=0;
for(k=0;k<=5;k++){
    printf("%d",arr[k]);
}
}