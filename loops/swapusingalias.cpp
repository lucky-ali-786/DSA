#include<iostream>
using namespace std;
void swap(int &x,int &y){
int temp=x;
x=y;
y=temp;
}
int main(){

   int a;
   cin>>a;
     int b;
   cin>>b;
   swap(a,b);
   cout<<a<<b;
}   