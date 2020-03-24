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
	
	bool push(int x) 
    { 
	 if (top>=(N-1)) { 
		cout<<"Overflow"; 
		return false; 
	 } 
	 else { 
		a[++top]=x; 

		return true; 
	 } 
    } 

    int pop() 
    {    
	 if (top<0) { 
		cout<<"Underflow"; 
		return 0; 
	 } 
	 else { 
		int x=a[top--]; 
		return x; 
	 }  
    } 
    int peek() 
    {   
	 if (top<0) { 

		return 0; 
	 } 
	 else { 
		int x=a[top]; 
		return x; 
	 }  
    } 

    bool empty() 
    { 
	 return (top<0); 
    }  
Stack sortStack(Stack input) 
{ 
    Stack tmpStack; 
  
    while (!input.empty()) 
    {
        int tmp = input.top; 
        input.pop(); 
  
       
        while (!tmpStack.empty() && tmpStack.top > tmp) 
        { 
            
            input.push(tmpStack.top); 
            tmpStack.pop(); 
        } 
  
       
        tmpStack.push(tmp); 
    } 
  
    return tmpStack; 
}
void display(){
 	 while (!empty()) { 
        cout << " " << pop();  
    } 
 }
};
int main() 
{ 
    Stack input; 
    input.push(3); 
    input.push(2); 
    input.push(1); 
    input.push(9); 
    input.push(7); 
    input.push(5); 
  
  
    Stack tmpStack=input.sortStack(input); 
    cout << "Sorted numbers are:\n"; 
  
    cout<<"SORTED STACK"<<endl;
    tmpStack.display();
}
