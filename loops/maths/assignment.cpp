#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count=0;
int arr[]={1,4,2,5,2,5,3,5,7,7,6};
vector<int> v(11,1);
for(int i=0;i<11;i++){
    for(int j=i+1;j<11;j++){
        if(arr[i]==arr[j]){
          v[i]++;
        }
    }
}
int max=v[0];
for(int i=0;i<11;i++){
  if(max<v[i]) {max =v[i];
count=i;}
}

cout<<arr[count];
}