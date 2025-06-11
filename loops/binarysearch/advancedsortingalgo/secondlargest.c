#include<stdio.h>
int main(){
    int arr[]={4,5,3,65,97};
    int max=arr[0];
    int i;
    for(i=0;i<5;i++){
        if(max<arr[i]) max=arr[i];
    }
    int smax=arr[0];
    int k;
    for(k=0;k<5;k++){
        if(smax<arr[k]&&arr[k]!=max)smax=arr[k];
    }
    printf("%d",smax);
}