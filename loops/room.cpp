#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
 { int n;
    cin>>n;
    int arr[n][2];
    for(int  i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
   int count =0;
    for(int  i=0;i<n;i++){
        if(arr[i][1]-arr[i][0]>=2){
            count++;
            }
           
            
        }
     
   
   cout<<count;

   }