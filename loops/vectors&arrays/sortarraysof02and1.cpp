#include<vector>
#include<iostream>
using namespace std;

void sortColors(vector<int> &v) {
        
        int noz ;
        int noo ;
        int nou;
        for(int i=0;i<6;i++){
            if(v[i]==0)noz++;
           else if(v[i]==1)noo++;
            else nou++; 
        }   for(int j=0;j<6;j++){
            if(j<noz) v[j]=0;
            else if(j<noz+noo) v[j]=1;
            else {v[j]=2;}   
            
    }return;}
    int main(){
        vector<int> v(6);
        for(int i=0;i<6;i++){
            cin>>v[i];
        }
              
        sortColors(v);
       for(int i=0;i<6;i++){
        cout<<v[i];
       }
    
   
    }