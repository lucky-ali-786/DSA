#include<iostream>
#include<vector>
#include<string>
using namespace std;
   int main() {
    long long n;
    cin>>n;
    int count=0;
    while(n>0){
        int sum= n%10;
        if(sum==7||sum==4){
            count++;//4744000695826
        }
        n= n/10;
    }
    if(count==7||count==4){
        cout<<"YES";
    }
    else{cout<<"NO";}
   }