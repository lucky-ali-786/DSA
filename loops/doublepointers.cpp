#include<iostream>
using namespace std;
int main(){
int x;
int y;
cin>>x>>y;
int *Ptr=&x;
int *pyt=&y;
cout<<(*Ptr)*(*pyt);

}