#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int ak=0;
int ma=0;
while(n>0&&m>0){
    if(n>0 && m>0){
        m--;
        n--;
        ak++;
    }
    if(n>0&&m>0){
        m--;
        n--;
        ma++;
    }
}
if(ak<=ma) cout<<"Malvika";
else cout<<"Akshat";

}