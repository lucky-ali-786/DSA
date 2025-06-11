#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b){
    int r=b%a;
    if(r==0){
        return a; }
    gcd(r,a);
}
int main()
{
    int a,b;
    cin>>a>>b;
   cout<<gcd(a,bf);
}

