#include<iostream>
#include<vector>
#include<string>
using namespace std;
   int main() {
    int n,o;
    cin>>n>>o;
    for(int i=1;i<=o;i++){
        if(n%10!=0) n--;
        else if(n%10==0)n/=10;
    }
    cout<<n;
   }