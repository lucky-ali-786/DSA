#include<iostream>
using namespace std;
string decimal_to_binary(int p){
    string s="";
while(p>0){
if(p%2==0){
    s="0"+s;
}
else s="1"+s;
p=p>>1;
}
return s;
}
int main()
{ int p=18;
    cout<<decimal_to_binary(p);
}