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
void display(Node *temp){
   if(temp==NULL)
   {
    return;
   }
   cout<<temp->val<<" ";
   display(temp->next);
}
int size(Node *a){
    Node *temp=a;
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    return size;
}
int main()
{
Node *a=new Node(10);
Node *b=new Node(20);
Node *c=new Node(30);
Node *d=new Node(40);
a->next=b;
b->next=c;
c->next=d;
Node *temp=a;
//now how to traverse
display(temp);
cout<<endl;
cout<<size(a);
}