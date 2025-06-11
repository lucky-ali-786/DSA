#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void merge(vector<int> &a,vector<int> &b,vector<int> &res){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(a[i]>b[j]){
            res[k++]=b[j++];
        }
        else res[k++]=a[i++];
    }
    if(i==n1){
        while(j<n2){
            res[k++]=b[j++];
        }
    }
    if(j==n2){
        while(i<n1){
            res[k++]=a[i++];
        }

    }
}
void mergesort(vector<int> &v){
    int n=v.size();
    if(n==1) return;
    int n2=n-n/2;
    int n1=n/2;
    vector<int> r(n1),p(n2);
    for(int i=0;i<n1;i++){
        r[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        p[i]=v[n1+i];
    }
    mergesort(r);
    mergesort(p);
    merge(r,p,v);
}
int main(){
    int arr[]={4,6,7,3,5,3,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    mergesort(v);
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
}