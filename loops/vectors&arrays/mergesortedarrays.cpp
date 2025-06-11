#include<vector>
#include<iostream>
using namespace std;
void merge(vector<int> &v1,vector<int> &v2,vector<int> &v3){
    int i=0;
    int j=0;
    int k=0;
    for(int i=0;i<=5;i++){
    cin>>v1[i];
}
for(int i=0;i<=4;i++){
    cin>>v2[i];
}
while(i<=5&&j<=4){
    if (v1[i]<v2[j])
    {
      v3[k]=v1[i];
      k++;
      i++;
    }
    else if(v1[i]>v2[j]){
        v3[k]=v2[j];
        k++;
        j++;
    }
}
if (i==6){
    while(j<=4){
        v3[k]=v2[j];
        k++;
        j++;
    }
}
if(j==5){while (i<=5)
{
    v3[k]=v1[i];
    k++;
    i++;
}
}
}
int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    merge(v1,v2,v3);
    for(int i=0;i<11;i++){
    cout<<v3[i];
    cout<<endl;
}
    
}