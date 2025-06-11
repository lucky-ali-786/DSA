#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
     string s;
    getline(cin,s);
    string s1;
    getline(cin,s1);
    bool flag=false;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    if(s1==s)
    {
        flag=true;
    }
    if(flag==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}