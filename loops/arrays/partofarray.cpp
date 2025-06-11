#include<iostream>
#include<vector>
using namespace std;

void poki(vector<int> arr,vector<int> brr,int n){
    if(n==7){
        for(int i=0;i<brr.size();i++){
            cout<<brr[i];
        }
        return;
    }
    int x=arr[n];
    if(x==1){
        poki(arr,brr,n+1);
    }
    else{ brr.push_back(x);
        poki(arr,brr,n+1);}
    
} 
int main(){
    vector<int> arr={1,2,3,4,6,1,6};
    vector<int> brr;
    poki(arr,brr,0);
}