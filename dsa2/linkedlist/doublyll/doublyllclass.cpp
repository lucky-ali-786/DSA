#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
class DLL
{
public:
Node* head;
Node* tail;
int size;
DLL(){
head=tail=NULL;
size=0;
}
void insertatend(int val)
{
Node * temp=new Node(val);
if(size==0) tail=head =temp;
else{
    tail->next =temp;
    temp->prev=tail;
    tail=temp;
} 
size++;
}
void display()
{
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertatbeg(int val)
{
    Node *temp=new Node(val);
    size++;
    if(size>0){
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    else{
        tail=head=temp;
    }
}
void insertatanyidx(int idx,int val){
    if(idx==0) {
        insertatbeg(val);
        return ;
    }
    else if(idx==size)
    {insertatend(val);}
    else if(idx<0||idx>size){
        cout<<"invalid index";
        return;
    }
    else{
        Node *t=new Node(val);
        Node *temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next->prev=t;
        temp->next=t;
        t->prev=temp;
        size++;
}
}
int getatidx(int idx){
if(idx<0||idx>=size) {
    cout<<"invalid idx";
    return -111;
}
if(idx==0) return head->val;
if(idx==size-1) return tail->val;
else{Node *temp=head;
    for(int i=0;i<idx;i++)
    {
        temp=temp->next;
    }
    return temp->val;
}
return 0;
}
void delteathead()
{
    if(size==0) {
        cout<<"ll is empty";
        return ;
    }
    head=head->next;
    size--;
}
void delattail()
{
    if(size==0) {
        cout<<"ll is empty";
        return ;
    }
    Node *temp=head;
    for(int i=1;i<size-1;i++){
        temp=temp->next;
    }
    tail=temp;
    tail->next=NULL;
    size--;
}
void delteatidx(int idx){
    if(idx<0||idx>=size) {
        cout<<"list is invalid";
        return;
    }
    else if(idx==0) delteathead();
    else if(idx==size-1) delattail();
    else {
        Node *temp=head;
        for(int i=0;i<idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;

    }
}
};
int main()
{
DLL list;
list.insertatend(20);
list.insertatend(30);
list.insertatend(40);
list.insertatend(50);
list.display();
list.insertatanyidx(2,70);
list.display();


}