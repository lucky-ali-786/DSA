 #include<iostream>
#include<vector>
using namespace std;
int main()   {
    int n;
   cin>>n;
   vector<string> v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   } 
   int count=0;
   for(int i=0;i<n;i++){
    if(v[i]=="Icosahedron") count+=20;
    if(v[i]=="Octahedron") count+=8;
     if(v[i]=="Dodecahedron") count+=12;
      if(v[i]=="Tetrahedron") count+=4;
      if(v[i]=="Cube") count+=6;


   }
   cout<<count;

   }