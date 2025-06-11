#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   vector<string> p;
   for(int i=0;i<n;i++){
    if(v[i]<2020) p.push_back("NO");
    if(v[i]%2020==0||v[i]%2021==0) p.push_back("YES");
    
   }
}