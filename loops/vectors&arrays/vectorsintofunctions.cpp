#include<vector>
#include<iostream>
using namespace std;
void change(vector<int> &a){
    a[0]=1;
}
//vectors are passed by value but with use of ampersand opertaion we can get the address..
int main(){
    vector<int> v;
   
    v.push_back(9);
     v.push_back(7);
      v.push_back(6);
       v.push_back(5);
       for(int i=0;i<4;i++){
        cout<<v[i]<<endl;
       }
    change(v);
     for(int i=0;i<4;i++){
        cout<<v[i]<<endl;
       }

}