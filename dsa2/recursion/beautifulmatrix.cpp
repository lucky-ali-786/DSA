#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()   {
   int arr[5][5];
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>arr[i][j];
    }
   }
   int x;
   int y;
    for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
       if(arr[i][j]==1) {
        x=i;
        y=j;
       }
    }
   }
   int sum1 =(x-2);
   if(sum1<0) sum1*=-1;
   int sum2=(y-2);
   if(sum2<0) sum2*=-1;
   cout<<sum1+sum2;
   }
