#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void merge(vector<int> &a,vector<int> &b,vector<int> &res){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]>b[j]) res[k++]=b[j++];
        else res[k++]=a[i++];}
    if(i==a.size()){
        while(j<b.size()){
        res[k++]=b[j++];}
    }
    if(j==b.size()){ while(i<a.size())
        {
        res[k++]=a[i++];}
}
}
void mergesort(vector<int> &a)
   {
    int n=a.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n/2;
    vector <int> v(n1),p(n2);
    for(int i=0;i<n1;i++){
        v[i]=a[i];
    }
    for(int i=0;i<n2;i++){
        p[i]=a[n1+i]; 
    }
    mergesort(v);
    mergesort(p);
    merge(v,p,a);
    v.clear();
    p.clear();}
    
int main() {
int arr[]={0,8,9,7,5,4};
int n=sizeof(arr)/sizeof(arr[0]);
vector<int> a(arr,arr+n);
    mergesort(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i];}
}
