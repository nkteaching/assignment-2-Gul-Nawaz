#include <iostream>
using namespace std;
struct node{
	char data;
	struct node *next;
}*top=NULL;
void push(char val){
	node *t=new node;
	if(t==NULL){
		cout<<"Stack overflow"<<endl;
	}
	else{
		t->data=val;
		t->next=top;
		top=t;
	}
}
char pop(){
	char x=-1;
	node *p;
	if(top==NULL){
		cout<<"Stack Underflow"<<endl;
	}
	else{
		p=top;
		x=top->data;
		top=top->next;
		delete(p);
	}
	return x;
}
void print(){
	node *p=top;
	while(p!=NULL){
		cout<<p->data<<endl;
		p=p->next;
	}
}
int balance(char *exp){
	for(int i=0;i<exp[i]!='\0';i++){
		if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{'){
			push(exp[i]);
		}
		else if(exp[i]==')' || exp[i]==']' || exp[i]=='}'){
			if(top==NULL){
				return 0;
			}
			else{
				pop();
			}
		}
		if(top==NULL){
			return 1;
		}
		else{
			return 0;
		}
	}
}
int main(){
	
	char *exp="((a+b)-(c+d))";
	cout<<balance(exp);
}
