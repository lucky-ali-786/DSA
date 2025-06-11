#include<iostream>
#include<vector>
using namespace std;
void arr1(vector<int> &arr,int n)
{
    if(n==0) return ;
    vector<int> v(n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
        if(i!=(n-1))
        {
            v[i]=arr[i]+arr[i+1];
        }
    }
    cout<<endl;
    arr1(v,n-1);
}
int main(){
    int n;
    cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
   arr1(arr,n);
}