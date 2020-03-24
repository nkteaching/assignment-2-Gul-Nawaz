#include<iostream>
using namespace std;
float seriesSum(int n,float a,int c){
	if(a>n){
		return 0;
	}
	else{
		if(c%2==0 || c==1){
			cout<<"+"<<1<<"/"<<a<<" ";
			return (1/a)+seriesSum(n,a+1,c+1);
		}
		else if(c%2!=0 && c!=1){
			cout<<"-"<<1<<"/"<<a<<" ";
			return - (1/a)+seriesSum(n,a+1,c+1);			
		}
	}
}
int main(){
	int n;
	cin>>n;
	cout<<"Sum of series is: "<<seriesSum(n,1,1);
}

