#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
int main()
{
Node a(10);
Node b(20);
Node c(30);
Node d(40);
//forming ll;
a.next=&b;
b.next=&c;
c.next=&d;
d.next=NULL;
Node temp=a;
//now by for loop printing linked list
while(1){
    cout<<temp.val;
    if(temp.next==NULL) break;
    temp=*(temp.next);
}
}