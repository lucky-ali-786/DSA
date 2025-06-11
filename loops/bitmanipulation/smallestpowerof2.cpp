#include<iostream>
using namespace std;
int main(){
 int setcount=0;
 int n=23;
//  while(n!=0){
//      p=n;
//     setcount++;
//     n=(n-1)&p; 
//  }
//  cout<<p;
int p=n;
n=n|n>>1;
n=n|n>>2;
n=n|n>>4;
n=n|n>>8;
n=n|n>>16;
cout<<(p^n);


}