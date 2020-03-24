#include<iostream>
#include<string.h>
using namespace std;
int occurence(string s, char ch, int n, int count) {
	int i;
    if(i<n){
        if (s[i]==ch){
            i++;
            return occurence(s,ch,n,count+1);
        }
        else{
            i++;
            return occurence(s,ch,n,count);
        }
    }
    return count;
}

int main() {
	string s="Gul";
	char ch='G';
    cout<<"NO OF OCCURENCE: "<<occurence(s,ch,s.length(),0)<<endl;
}
