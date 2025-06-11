#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
    int t; 
    cin >> t;
    vector <string> v(t);
    while (t--) {
        int n; 
        cin >> n;
        
        vector<int> a(n); 
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        bool flag=true;
        if(n==2) {
            if(a[0]==a[1] && a[1]==1 ||a[0]==a[1] && a[1]==0){
              v.push_back("YES");  
            }
            else{
                v.push_back("NO");
            }
        }
       else{ for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]&&a[i+1]==0){
                v.push_back("YES");
                flag=false;
                break;
            }
        }
        if(flag==true)  v.push_back("NO");}
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    }