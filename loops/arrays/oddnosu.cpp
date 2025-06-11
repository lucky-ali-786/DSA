#include<iostream>
using namespace std;
void odd(int a,int b){
    if(a==b||a>b){cout<<b;
    return ;} 
    cout<<a;
    odd(a+2,b);
    
}
int main(){
    int a,b;
    cin>>a>>b;
    odd(a,b);
}