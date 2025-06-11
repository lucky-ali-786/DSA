#include<iostream>
using namespace std;
int main()
{
 int arr[]={2,2,2,5,2,2,2};
 int res=arr[0];
for(int i=1;i<7;i++){
    res=res^arr[i];
}
cout<<res;
}