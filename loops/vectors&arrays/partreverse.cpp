#include<vector>
#include<iostream>
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
}return;
}
int main(){
vector<int> v(6);
for(int i=0;i<=5;i++){
    cin>>v[i];
}

reverse(0,5,v);
display(v);
}