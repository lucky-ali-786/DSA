#include<iostream>
using namespace std;
int main(){
 int setcount=0;
int x,y;
cin>>x>>y;
int p=x^y;
while(p!=0){
    setcount++;
    p=(p-1)&p;
}

cout<<setcount;
}