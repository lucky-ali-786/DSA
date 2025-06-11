#include<iostream>
using namespace std;
int factorial(int x){
int a=1;
    for(int i=1;i<=x;i++){
        a=a*i;
    }
   return a;
}
int combination(int n,int r){
    float z=factorial(n)/(factorial(r)*factorial(n-r));
    return z;
}
int main(){
   int n;
   cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j);
        }cout<<endl;
    }

}       