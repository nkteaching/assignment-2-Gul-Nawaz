#include<iostream>
using namespace std;
int print(int n){
	if(n<1){
		return 0;
	}
	else{
		cout<<n;
		print(n-1);
		return 0;
	}
}
int main(){
	print(5);
}
