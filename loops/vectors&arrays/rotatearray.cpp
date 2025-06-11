#include<vector>
#include<iostream>//good question
using namespace std;
void display(vector<int> &a){
    for(int j=0;j<=5;j++){
        cout<<a[j];
    }
}
void reverse(int i, int j, vector<int>& v)
{while (i<=j)
{ int temp=v[i];
v[i]=v[j];
v[j]=temp;
i++;
j--;
}return;}
void reverse2(vector<int> &v){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int temp =v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
}

int main(){
vector<int> v(6);
for(int i=0;i<=5;i++){
    cin>>v[i];
}
int k;
cin>>k;
if(k>v.size()){k=k%v.size();}
reverse(0,v.size()-k-1,v);
reverse(v.size()-k,v.size()-1,v);
reverse2(v);
display(v); 
}