#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int c=0;
void merge(vector<int> &a,vector<int> &b,vector<int> &res){
    int n1=a.size();
    int n2=b.size();
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i]>b[j]) res[k++]=b[j++];
        else res[k++]=a[i++];}
    if(i==n1) while(j<n2) res[k++]=b[j++];
    if(j==n2) while(i<n1) res[k++]=a[i++];
}
int inv(vector<int> &a,vector<int> &b){
    int i=0;
    int count=0;
    int j=0;
    while(i<a.size()&&j<b.size()){
        if(a[i]>b[j]) {count+=a.size()-i;
        j++;
        i++;}
        else i++;xv
    }
    return count;
}
void mergesort(vector<int> &v){
    int n= v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> p(n1),q(n2);
    for(int i=0;i<n1;i++){
        p[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        q[i]=v[n1+i];
    }
    mergesort(p);
    mergesort(q);
    c+=inv(p,q);
    merge(p,q,v);
    p.clear();
    q.clear();
}
int main(){
    int arr[]={4,6,4,2,5,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector <int> v(arr,arr+n);
    mergesort(v);
    cout<<c;
}