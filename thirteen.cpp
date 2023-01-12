#include<iostream>
using namespace std;
class node{
public:
int data;
node*next;
public:
node(int v){
data=v;
next=NULL;
}
};
class linked:public node{
node*head;
public:
linked(int v):node(v){

}
node* insert(int v){
if(this==NULL){
node*head=new node(v);
}
else {
    node*temp=head;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=new node(v);
}
return head;
}
};
int main(){
linked *ll;
ll->insert(10);
ll->insert(20);
ll->insert(30);
ll->insert(5);
ll->insert(34);
ll->insert(35);
while(ll!=NULL){
    cout<<ll->data<<" ";
    ll=ll->next;
}



    return 0;
}