#include<iostream>
#include<vector>
#include<string>
using namespace std;
   int main() {
    
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int count =0;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]==arr[j]) count++;
        }
    }
    if(count==3) count-=1;
    if(count==6) count-=3;
    cout<<count;
    
   }