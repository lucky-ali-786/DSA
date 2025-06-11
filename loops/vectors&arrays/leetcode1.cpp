#include<vector>
#include<iostream>
using namespace std;
int main(){
vector<int> v(6);
for(int i=0;i<=5;i++){
    cin>>v[i];
}
int x;
cin>>x;
int index =-1;
int sum =0;
for(int i=0;i<=4;i++){
    for(int j=i+1;j<=5;j++){
        if(v[i]+v[j]==x){
            index=i;
            sum=j;
            cout<<index<<" "<<sum;
            cout<<endl;
        }
    }
}

}