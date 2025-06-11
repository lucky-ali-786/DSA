#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int p=0;
int max=-1;
for(int i=0;i<n;i++){
    if(max<arr[i]) {max=arr[i];
    p=i;}

}
int j=p-1;
int t=0;
while(j>=0){
    swap(arr[j],arr[p]);
    t++;
    j--;
    p--;
}
max=INT_MAX;
for(int i=n-1;i>=0;i--){
if(max>arr[i]) {max=arr[i];
p=i;}
}
j=p+1;
while(j<n){
   swap(arr[j],arr[p]);
    t++;
    p++;
    j++;
}
cout<<t;

}