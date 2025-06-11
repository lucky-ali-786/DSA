#include<iostream>
using namespace std;
void odd(int b){
    if(b%2==0){cout<<"true";
    return ;} 
    odd(b);
    
}
int main(){
    int b;
    cin>>b;
    odd(b);
}