#include<iostream>
using namespace std;
void find(int n,int* ptr,int* ptr2){

    *ptr2=n%10;
    while (n>9)
    {n=n/10;
    }
    *ptr=n;
}
int main() {
    int n;
    cin>>n;
    int first,last;
    int *ptr=&first;
    int *ptr2=&last;
    find(n,ptr,ptr2);
    cout<<"the first digit is :"<<first<<endl<<"the last digit is:"<<last;

}