#include<iostream>
#include<vector>//good question
using namespace std;
void sort01(vector<int> &v){
    int noz=0;
    int noo=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){noz++;}
        else{noo++;}
    }
    for(int j=0;j<v.size();j++){
        if(j<noz){v[j]=0;}
        else{v[j]=1;}
    }
}
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
    sort01(v);
    display(v);
    

}