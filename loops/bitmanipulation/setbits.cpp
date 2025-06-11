#include<iostream>
using namespace std;
int main(){
 int setcount=0;
 int n=13;
 while(n!=0){
    int p=n-1;
    setcount++;
    n=n&p;
    
 }
 cout<<setcount;
}