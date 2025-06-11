#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <string> s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
   for(int i=0;i<n;i++){
    int count1=0;
    int count0=0;
   for(int j=0;j<s[i].length();j++){
    if(s[i][j]=='0') count0++;
    else{
        count1++;
    }
   }
    int x=0;
    while(count0>0 && count1>0){
        count0--;
        count1--;
         x++;
    }
    if(x%2==0) cout<<"NET"<<endl;
    else cout<<"DA"<<endl;
   }
}