#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<long long int> v(26,1);
    int mod=1000000000+7;
    for(int i=2;i<26;i++){
        v[i]=((v[i-1]%mod)*(i%mod))%mod;
    }
    for(int i=0;i<26;i++){
        cout<<i<<"! = "<<v[i]<<"\n";
    }
} 