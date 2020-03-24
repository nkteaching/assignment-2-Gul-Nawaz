//this function prints size+1 spaces 
#include <bits/stdc++.h> 
using namespace std;
void reverse() {
	static char ch;
	cin.get(ch);
	if (ch != '\n')
	  reverse();
	cout.put(ch);
}
int main(){
	reverse();
}
