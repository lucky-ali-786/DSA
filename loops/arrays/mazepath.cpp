#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er||sc>ec) return 0;
    if(sr==er&&sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways =maze(sr+1,sc,er,ec);
    return rightways+downways; }

    void print(int row,int col,string s){
    if(row<1||col<1) return;
    if(row==1&&col==1){
        cout<<s<<endl;
        return;
    }
    print(row,col-1,s+'R');
    print(row-1,col,s+'D'); 
 }
 int maze2(int row,int col){
    if(row<1||col<1) return 0;//with two variables
    if(row==1&&col==1) return 1;
    int rightways=maze2(row,col-1);
    int downways=maze2(row-1,col);
    return rightways+downways; }

int main(){

print(2,2,"");
    }