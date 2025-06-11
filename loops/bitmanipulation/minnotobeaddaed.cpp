#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int temp=n;
int p=0;
if( n & n-1==0) {cout<<n;}
else {
while(temp>0){
    temp/=2;
    p++;
}
int z=1<<p;
cout<<z-n;
}
}
