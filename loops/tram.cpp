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
   
    int sum=0;
    vector<int> v;
    for(int  i=0;i<n;i++){
        for(int j=0;j<2;j++){
            if(j==1){
                sum+=arr[i][j];
            }
            v.push_back(sum);
           if(j==0){
            sum-=arr[i][j];
           } 
            }
        }
     int capacity=v[0];
   for(int i=0;i<v.size();i++){
    if(capacity<v[i])capacity=v[i];
   }
   cout<<capacity;

   }