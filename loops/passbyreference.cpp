#include<iostream>
using namespace std;
void swap(int *p,int *p1){
      int temp =*p;
      *p=*p1;
      *p1=temp;
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
}