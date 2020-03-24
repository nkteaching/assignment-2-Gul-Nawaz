#include<iostream>
#include<string.h>
using namespace std;
bool palindrome(string str,int a,int z){
	if(a==z){
		return true;
	}
	if(str[a]!=str[z]){
		return false;
	}
	if(a<z+1){
		return palindrome(str,a+1,z-1);
	}
	return true;
}
bool checkstring(char str[]) {
int n=strlen(str);
if (n == 0) 
    return true; 
  
return palindrome(str, 0, n - 1); 
}
int main() 
{ 
    char str[]="katak"; 
  
    if (checkstring(str)) 
    cout<<"Yes"; 
    else
    cout<<"No"; 
  
    return 0; 
}
