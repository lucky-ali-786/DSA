#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
 {
    vector<int> v;
    for(int  i=0;i<v.size();i++){
        cin>>v[i];
        }
    
   
    int count=0;
    vector<int> v;
    for(int  i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
           if(v[i]==v[j]&&v[i]==1) {count++;}
        }
    }
   }