#include <bits/stdc++.h> 
using namespace std;
void tail(int i) {
  if (i > 0) {
   cout << i << " "; 
   tail(i-1); 
   }
}
void nonTail(int i) {
  if (i > 0) {
   nonTail(i-1);
   cout << i << " "; 
   nonTail(i-1);
 }
}
	 
int main(){
	cout<<"nonTail(2)"<<endl;
	nonTail(2);
	cout<<endl;
	cout<<"Tail(2)"<<endl;
	tail(2);
}
