#include<iostream>
using namespace std;
void pablo(int n){
    int x=1;
    if(x==n)return ;
    cout<<x<<endl;
    pablo(x);
}
int main(){
    int n;
    cin>>n;
    pablo(n);
}