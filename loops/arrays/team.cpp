#include<iostream>
#include<vector>
using namespace std;
   int main() {
    int x;
    cin>>x;
    vector<vector<int>> v(x,vector<int> (3));
    for (int i=0; i<x; i++)
    {
       for(int j=0;j<3;j++){
        cin>>v[i][j];
       }
    }

    int count1=0;
    for (int i=0; i<x; i++)
    {      int count =0;
       for(int j=0;j<3;j++){
        if(v[i][j]==0){ count ++;}
       }
       if(count==2||count==3){
         count1++;
       }
    }
        cout<<x-count1;
   }