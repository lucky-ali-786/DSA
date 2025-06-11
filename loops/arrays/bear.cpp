#include<iostream>
#include<vector>
using namespace std;
   int main() {
    int a,b;
    cin>>a>>b;
    int c;
    for(int i=1;i<=50;i++){
        a*=3;
        b*=2;
        if(a>b) {c=i;
        break;}
    }
    cout<<c;
   }