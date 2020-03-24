#include<iostream>
using namespace std;
void print(unsigned long long n){
	const unsigned int th=1000;
	if(n<th){
		cout<<n;
	}
	else{
		int rem=n % th;
		cout<<n/th;
		cout<<","<<rem;
	}
}
int main(){
	int long n;
	cin>>n;
	print(n);
}
