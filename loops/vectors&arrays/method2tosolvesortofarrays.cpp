#include<iostream>
#include<vector>//good question
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
int i=0,j=5;
while(i<j) {
    if(v[j]==1){j--;}
    if(v[i]==0){i++;}
    if(i>j) break;
    if(v[i]==1 && v[j]==0){
        v[i]=0;
        v[j]=1;
        i++;
        j--;
    }
}

display(v) ;}