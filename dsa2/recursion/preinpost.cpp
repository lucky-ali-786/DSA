#include<iostream>
using namespace std;
void pip(int n)
{
    if(n==0) return ;
cout<<n;
pip(n-1);
cout<<n;
pip(n-1);
cout<<n;//zigzagop

}
int main(){
pip(1);
}