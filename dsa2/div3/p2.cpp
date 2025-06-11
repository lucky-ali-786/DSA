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
vector <string> p;
    while(t--){
        int n,k;
        cin>>n>>k; 
        int count=0;
        string s;
        cin>>s;  
      int i=0;
      int j=s.length()-1;
      while(i<=j){
        if(s[i]==s[j]){
            count++;
        }
         i++;
            j--;
      }
      if(count==k){
        p.push_back("YES");
      }
      else{
          p.push_back("NO");
      }
    }
    for(int i=0;i<p.size();i++){
        cout<<p[i];
        cout<<endl;
    }
}