#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int p;
cin>>p;
int arr[n][p];
for(int i=0;i<n;i++)//row do isko{
{
for(int j=0;j<p;j++){
    cin>>arr[i][j];
}
}
int m;
cin>>m;
int q;
cin>>q;
int brr[m][q];
for(int i=0;i<m;i++)//row do isko{
{
for(int j=0;j<q;j++){
    cin>>brr[i][j];
}}
if(p==m){
    int res[n][q];
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<p;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    for(int i=0;i<n;i++)//row do isko{
{
for(int j=0;j<q;j++){
    cout<<res[i][j];
}
cout<<endl;
}

}
else{cout<<"multiplication not possible";}

}