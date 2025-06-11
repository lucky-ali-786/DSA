#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector <string> v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   } 
   for(int i=0;i<n;i++){
    if(v[i]=="yES"||v[i]=="yes"||v[i]=="Yes"||v[i]=="YES"||v[i]=="YeS"||v[i]=="yeS"||v[i]=="YEs"||v[i]=="yEs")
    {
        cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
     }
    }

}