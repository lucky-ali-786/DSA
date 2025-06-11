#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[4][2]{3,4,5,6,7,8,3,4};
int res[2][4];
for(int i=0;i<4;i++)//row do isko{
{
for(int j=0;j<2;j++){
    cout<<arr[i][j];
    }
    cout<<endl;
    //column do isko;
}cout<<endl;
for(int i=0;i<2;i++)
{
for(int j=0;j<4;j++){
    res[i][j]=arr[j][i];
    }
}
for(int i=0;i<2;i++)//row do isko{
{
for(int j=0;j<4;j++){
    cout<<res[i][j];
    }
    
}

}