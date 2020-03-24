#include<iostream>
#include<string.h>
using namespace std;
bool checkch(string str,char ch,int n){
	int i; 
    if(i<n){
        if (str[i]==ch)
            return true;
        else
            i++;
            return checkch(str,ch,n);
    } 
	else {
        return false;
    }
}
int main(){
	string str="Gul";
	char ch='G';
	if(checkch(str,ch,str.length())){
		cout<<"exists";
	}
	else{
		cout<<"Doesn't exixsts'";
	}
}
