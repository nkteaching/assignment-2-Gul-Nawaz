#include<iostream>
using namespace std;
int i=0;
void cubes(int n){
	while(i<=n){
		if(i==1){
			cout<<i;
			i++;
			cubes(n-1);
		}
		else{
			cout<<i*i*i;
			i++;
			cubes(n-1);	
		}
	}
}
int main(){
	int n;
	cin>>n;
	cubes(n);
}
