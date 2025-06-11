#include<stdio.h>
int main(){
    int a,b,c;
    int r1,r2;
    printf("Enter the coefficeints");
    scanf("%d %d %d",&a,&b,&c);
    int x=1;
    int D=(b*b)-(4*a*c);
    if(D<0){ printf("Imaginary roots");
    x=2;}
    else if(D>0){
        int rootd=0;
        int n=D;
        int y=0;
        int lo=1;
        int hi=n;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid*mid==n){
                rootd=mid;
                y=2;
                break;
            }
            else if(mid*mid<n){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        if(y==0) rootd=hi;
        printf("%d",rootd);
        r1=(-b+rootd)/(2*a);
        r2=(-b-rootd)/(2*a);

    }
    else{r1=(-b)/(2*a);
         r2=(-b)/(2*a);}

        if(x==1) printf("the roots are %d %d",r1,r2);
}