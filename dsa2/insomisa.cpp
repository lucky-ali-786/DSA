#include<iostream>
#include<vector>
using namespace std;
int main()
{int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ans=0;
    int t=0;
    if(k==1||m==1||l==1||n==1) ans=d;
    else{
        ans=(d/k)+(d/l)+(d/m)+(d/n);
        for(int i=2;i<=d;i++){
            if(i%k==0 && i%l==0){
                t++;
            }
           if(i%k==0 && i%m==0){
                t++;
            }
            if(i%k==0 && i%n==0){
                t++;
            }
            if(i%l==0 && i%m==0){
                t++;
            }
            if(i%l==0 && i%n==0){
                t++;
            }
            if(i%m==0 && i%n==0){
                t++;
            }
        }
    }
    cout<<ans-t;

}