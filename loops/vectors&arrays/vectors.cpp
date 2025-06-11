#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(8);
     v.push_back(0);
      v.push_back(9);
       v.push_back(6);
        v.push_back(8);
     v.push_back(0);
      v.push_back(9);
       v.push_back(6);
        v.push_back(8);
     v.push_back(0);
      v.push_back(9);
       v.push_back(6);
        for(int i=0;i<v.size();i++){
            cout<<v[i];
            cout<<endl;
        }
        v.pop_back();//aakhri elemnt gayab ho jaega
        for(int i=0;i<v.size();i++){
            cout<<v[i];
            cout<<endl;
        }



}