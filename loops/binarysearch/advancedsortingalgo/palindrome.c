#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int count=0;
int poki=0;
while(n>0){
    poki=n%10;
    count=count*10+poki;
    n/=10;
}
printf("%d",count);

}