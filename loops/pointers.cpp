#include<iostream>
using namespace std;
int main(){
    int x,y;
    
int *ptr=&x;
int *pt=&y;
ptr+=5;
(*ptr)++;//new thing for all increment or decrement;
cout<<ptr;

}