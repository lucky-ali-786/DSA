#include<vector>
#include<iostream>
using namespace std;
void display(vector<int> &a){
    for(int j=0;j<=5;j++){
        cout<<a[j];
    }
}
int main(){
vector<int> v(6);
for(int i=0;i<=5;i++){
    cin>>v[i];
}


for(int i=0,j=5;i<=j;i++,j--){
    int temp =v[j];
    v[j]=v[i];
    v[i]=temp;}


display(v) ;
}//445654