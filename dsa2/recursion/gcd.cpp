#include<iostream>
using namespace std;
void gcd(int c,int m){
  if(m%c==0) {
    cout<<c;
    return;
  }
  gcd(m%c,c);

}
int main(){
    int n,m;
    cin>>n>>m;
    int sum=n+m;
    int c=min(n,m);
    gcd(c,sum-c);
}