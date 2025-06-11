#include<iostream>
#include<climits>
using namespace std;
int main(){
    int count=0;
    int ans=0;
    int arr[9]={1,3,2,5,6,3,2,13,13};
    int x=INT_MIN;
    for(int i=0;i<9;i++){
        if(x<arr[i]) {x=arr[i];
        count=1;
        ans =max(ans ,count);
        }
        else if(arr[i]==x) {
            count++;
            ans=max(ans,count);        }

    }
   
    cout<<ans;
}