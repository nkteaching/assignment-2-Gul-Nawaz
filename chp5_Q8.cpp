#include <iostream> 
using namespace std;
int multiply(int a, int b) 
{ 
    if (a<b) 
        return multiply(b,a);
    else if (b!=0) 
        return (a+multiply(a,b-1));
    else
        return 0; 
}
int main(){ 
    int a=10,b=3; 
    cout<<multiply(a,b);
	 
    return 0; 
} 
