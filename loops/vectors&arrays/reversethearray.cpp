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

vector<int> v2(v.size());
for(int j=0;j<=5;j++){
    for(int i=0;i<=5;i++){
        if((i+j)==5){v2[i]=v[j];}
    }


}
display(v2);}