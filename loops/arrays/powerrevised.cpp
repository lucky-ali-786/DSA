#include<iostream>
using namespace std;
int pow(int a,int n){
    if(n==1) return a;
    int power =pow(a,n/2);
    if(n%2==0) {return power*power;}
    else{return power*power*a;} }
int main(){
    int n,a;
    cin>>a>>n;
    cout<<pow(a,n);}