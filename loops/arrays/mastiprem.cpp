#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   
for(int j=1;j<=n*n;j++){
            cout<<j<<" ";
            if(j%n==0) cout<<endl;
        }
        cout<<endl;
       
    }
