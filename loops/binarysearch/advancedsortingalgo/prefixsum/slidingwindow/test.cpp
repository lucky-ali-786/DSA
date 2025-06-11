#include<iostream>
#include<climits>
#include<vector>
using namespace std;
vector<long long> findPrefixScore(vector<int>& nums) {
    int n=nums.size();
    vector<long long> conv(n);
    int j=1;
    for(int i=0;i<n;i++){
        vector<int> pref(j);
        for(int k=0;k<=i;k++){
            pref[k]=nums[i];
        }
        int max=INT_MIN;
        for(int p=0;p<pref.size();p++){
            if(max<pref[p]) max=pref[p];
        }
         for(int o=0;o<pref.size();o++){
            conv[i]=pref[i]+max;
        }
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<conv[i];
    }
    for(int i=1;i<n;i++){
        conv[i]+=conv[i-1];
    }
    return conv;
}
int main(){
    vector<int> v={2,3,7,5,10};
    findPrefixScore(v);

}
