#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
       int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
        cout<<endl;}
        int sumo=0;
int x;
cin>>x;
for(int i=0;i<n;i++){
    for(int j=i+1;j<=n-1;j++){
        for(int k=j+i;k<=n-1;k++){
            if(arr[i]+arr[j]+arr[k]==x){
                sumo++;
            }
        }
    }

}
cout<<sumo;
}