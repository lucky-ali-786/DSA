#include<vector>
#include<iostream>
using namespace std;
void swap(int i, int j,vector<int> &v){
    int temp =v[i];
    v[i]=v[j];
    v[j]=temp;
}

int main(){
    vector<int> v(6);
    v.push_back(2);
     v.push_back(1);
      v.push_back(0);
       v.push_back(1);
        v.push_back(2);
         v.push_back(0);

    int mid=0;
    int lo=0;
    int hi=5;
    while (mid<=hi)
    {
        if(v[mid]==2){
            swap(mid,hi,v);
            hi--;
        }
        if(v[mid]==0){
            swap(mid,lo,v);
            mid++;
            lo++;
        }
        if(v[mid]==1){
            mid++;
        }
    }
   cout<<v[4];
}