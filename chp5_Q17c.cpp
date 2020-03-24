#include<iostream>
#include<string>
using namespace std;
static int a,b;
void remch(string &str,char ch){
    if(str[a]){
        str[a]=str[a+b]; 
        if (str[a]==ch) {
            b++;
            a--;
        }
        a++;
        remch(str,ch);
    }
}
int main() {
	string str="Gul";
	char ch='G';
    remch(str,ch);
    cout<<"After removing character: "<<str<<endl;
}
