#include<iostream>
#include<vector>
using namespace std;
int main()
{int arr[3];
for(int i=0;i<3;i++){
    cin>>arr[i];
}
int max=arr[0];
for(int i=0;i<3;i++){
    if(max<arr[i]) max=arr[i];}
int smax=0;
for(int i=0;i<3;i++){
    if(smax<arr[i]&&max!=arr[i])  smax=arr[i];
}
int min=arr[0];
for(int i=0;i<3;i++){
    if(min>arr[i]) min =arr[i];
}
int result=(smax-min)+(max-smax);
cout<<result;
} 
