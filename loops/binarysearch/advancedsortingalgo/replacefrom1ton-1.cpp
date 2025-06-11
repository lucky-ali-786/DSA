#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    vector <int> v(5,0);
     int a=0;
    for(int i=0;i<5;i++){
        int min=INT_MAX;
        int x=-1;
       for(int j=0;j<5;j++){
        if(v[j]==1) continue;
       else {
        if(min>arr[j]) {min = arr[j]; 
            x=j;}
    }    }
         arr[x]=a;
          a++;
          v[x]=1;}
      for(int i=0;i<5;i++)
       {cout<<arr[i];}
}