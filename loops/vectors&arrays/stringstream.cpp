#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
     string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int count=1;
    int maxcount=1;
    for (int i = 1; i<v.size(); i++)
    {if(v[i-1]==v[i]){
        count++;}
        else{count=1;}
        maxcount=max(maxcount,count);
    }
    for (int i = 1; i<v.size(); i++)
    {if(v[i-1]==v[i]){
        count++;}
        else{count=1;}
        if(count==maxcount){
            cout<<v[i]<<endl<<maxcount;
        }
    }
}