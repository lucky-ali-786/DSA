#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    int r=n%5;
    if(r==0){
        s=n/5;
    }
    else if(r!=0){
        s=n/5;
        s++;
    }
    cout<<s;
}