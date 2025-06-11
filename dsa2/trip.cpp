#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int k;
    cin>>k;
    int p=k;
    int count=0;
    vector<int> v(12);
    for(int i=0;i<12;i++){
       cin>>v[i];
    }
    sort(v.begin(),v.end());
    int i=11;
    while(k>0 && i>=0){
        k-=v[i];
        i--;
        count++;
    }
    if(k>0) count=-1;
    cout<<count;
}