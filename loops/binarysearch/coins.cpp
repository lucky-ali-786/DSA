#include<iostream>
using namespace std;
bool check(int mid,int n){
   int x=0;
   int count=1;
   while(n>=count){
    n-=x;
    x+=n;
    count++;
   }
    }
    
int main(){
    int n;
    cin>>n;
    int lo=1;
    int hi=n
    while(lo<=hi){
        int mid=lo +(hi-lo)/2;
        if(check(mid,n)) {
            ans=mid;
            hi=mid-1; 
            }
        else{lo=mid+1;}
           }
        cout<<ans;
    }

   


