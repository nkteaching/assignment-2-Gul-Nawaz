#include <bits/stdc++.h> 
#define N 50
using namespace std; 

class Stack{
	int top; 

public: 
	int a[N]; 

	Stack(){ 
	top=-1;
	}
	//push function
	bool push(int x) 
    { 
	 if (top>=(N-1)) { 
		cout<<"Stack Overflow"; 
		return false; 
	 } 
	 else { 
		a[top++]=x; 
		return true; 
	 } 
    } 
	//pop function
    int pop() 
    {    
	 if (top<0) { 
		cout<<"Stack Underflow"; 
		return 0; 
	 } 
	 else{ 
		int x=a[top--]; 
		return x; 
	 }  
    }
    //peek function
    int peek(){
	 if(top<0){
		return 0; 
	 }
	 else{ 
		int x=a[top]; 
		return x; 
	    }
    }
    //empty function
    bool isEmpty(){
		return (top<0); 
    }       
//reversing here!
 void reverseStack(Stack s2,Stack s3){

	while(!isEmpty()){
	 	s2.push(pop());
	}
	while(!s2.isEmpty()){
	 	s3.push(s2.pop());
	}
	while(!s3.isEmpty()){
	 	push(s3.pop());
	} 
}
void transfer(Stack s2) { 
 	Stack tempStack; 
 	

 cout<<endl<<"Stack 1: "<<endl;
 while(!isEmpty()){
 	cout<<peek()<<" ";
 	tempStack.push(pop());
 }
 while(!tempStack.isEmpty()){
 	s2.push(tempStack.pop());
 }
 cout<<endl<<"Stack 2: "<<endl;
 s2.display();
}
void display(){
 	while(!isEmpty()){ 
        cout<<" "<<pop();  
    } 
}
};
int main(){
	Stack s1,s2;
	int n,val;
	cout<<"no of elemnnts in Stack 1:"<<endl;
	cin>>n;
	cout<<"Enter Elements for Stack 1:"<<endl;
	for(int i=0; i<n; i++){
		cin>>val;
		s1.push(val);
	}
	
	cout<<endl<<"After Transfer: "<<endl;
	s1.transfer(s2);
}
