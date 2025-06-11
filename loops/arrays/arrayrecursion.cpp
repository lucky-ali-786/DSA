#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
// void print(vector<int> &v,int idx,int b){
//     if(idx==v.size()) {
//         cout<<b;
//         return;}
//     if(b<v[idx]) {b=v[idx];}
//     print(v,idx+1,b);
// }
int print(vector<int> &v,int idx){
    if(idx==v.size()) {
     return INT_MIN;}
    return max(v[idx],print(v,idx+1));
}
int main(){
    vector <int> v={3,4,5,3,35,3,54,3,4,3};
    int max=v[0];
    cout<<print(v,0);
}