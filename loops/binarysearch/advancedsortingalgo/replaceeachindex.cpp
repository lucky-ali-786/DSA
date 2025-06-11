#include<iostream>
#include<climits>
using namespace std;
float max(float a,float b){
    if(a>b) return a;
    else{ return b;}
}
float min(float a,float b){
    if(a>b) return b;
    else{ return a;}
}
int main() {
    int n;
    cin>>n;
    bool flag=true;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float kmin=(float)(INT_MIN);
    float kmax=(float)(INT_MAX);
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) {
            kmin=max(kmin,((arr[i]+arr[i+1])/2.0));
        }
        else{  kmax=min(kmax,((arr[i]+arr[i+1])/2.0));}
        if(kmin>kmax){
            flag=false;
            break;
        }
    }
    if(flag==false) cout<<-1;
   else if(kmin==kmax){
        if(kmin-(int)kmin==0){
            cout<<"the only value is:"<<kmin;
        }
        else{cout<<-1;}
    }
    
    else{if(kmin-(int)(kmin)>0){
        kmin=(int)kmin+1;} 
        cout<<"The range is :"<<"["<<kmin<<","<<(int)kmax<<"]";
    }
    
}