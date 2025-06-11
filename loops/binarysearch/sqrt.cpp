#include<iostream>
using namespace std;
int main(){
    int x=;

    int lo=0;
    int hi=x;
    bool flag=true;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if((long long)(mid*mid)==x) {cout<<mid;
            flag=false;
        break;}
        if(mid*mid<x) {lo=mid+1;}
    if(mid*mid>x) hi=mid-1;}

    if(flag==true) cout<<hi;
            

}