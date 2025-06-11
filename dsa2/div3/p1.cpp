#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 vector<string> v(t);
 for(int i=0;i<t;i++){
    cin>>v[i];
 }   
 bool flag=true;
for(int i=0;i<t;i++){
    flag=true;
    for(int j=0;j<=sqrt(stoi(v[i]));j++)
    {
    for(int k=j;k<=sqrt(stoi(v[i]));k++){
       if((k+j)==sqrt(stoi(v[i])))
       {
        cout<<k<<" ";
        cout<<j;
        cout<<endl;
        flag=false;
}
}
if(flag==false) break;
}
 if(flag==true){cout<<"-1"<<endl;
    }
}
}





