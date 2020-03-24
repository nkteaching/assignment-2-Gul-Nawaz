#include<iostream>
using namespace std;
struct node{
	int data;
	struct node * next;
}*t,*last,*first;
void insert(){
	int n;
	if(first==NULL){
		cin>>n;
		first=new node;
		first->data=n;
		first->next=NULL;
		last=first;	
	}
	else{
		cin>>n;
		t=new node;
		t->data=n;
		t->next=NULL;
		last=t;
	}
}
int count(struct node *head){
	if(head==NULL){
		return 0;
	}
	else{
		return 1+count(head->next);
	}
}
//void display(){
//	cout<<first->data<<endl;
//	while(t!=NULL){
//		cout<<t->data<<endl;
//		t=t->next;
//	}
//}
int main(){
	insert();
	cout<<"Numbers of nodes: "<<count(first);
//	display();
}
