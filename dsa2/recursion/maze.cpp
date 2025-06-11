#include<iostream>
using namespace std;
int maze(int n,int m)
{
if(n==1||m==1) return 1;
if(n==2&&m==2) return 2;
return maze(n,m-1)+maze(n-1,m);
}
void print2(int n,int m,string s){
    if(n<1||m<1) return;
    if(n==1&&m==1){
        cout<<s<<endl;
        return;
    }
    print2(n-1,m,s+'D');
    print2(n,m-1,s+'R');
}
int main(){
 int n,m;
 cin>>n>>m;
 print2(n,m,"");
}