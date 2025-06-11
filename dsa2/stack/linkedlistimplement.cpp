#include<iostream>
#include<stack>
using namespace std;
class Node{
    int val;
    Node *next;
    Node(int val){
       this->next=NULL;
        this->val=val
    }
}
class Stack{
Node* head;
int size;
Stack(){
    head=NULL;
    size=0;
}
void push(int val){
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
    size++;
}
void pop(){
if(size==0) return;
head=head->next;
size--;
}
int top(){
    return head->val;
}
};
int main(){
Stack st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
cout<<st.size();

}